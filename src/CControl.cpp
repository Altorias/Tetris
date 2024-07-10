//
// Created by Altorias on 2024-07-02.
//

#include "CControl.h"
#include "SelfDefine.h"

#include "CUtils.h"

CControl::CControl(CGame* game)
{
    commandFunction[KEY_Q] = [this] { CommandQuit(); };
    commandFunction[KEY_W] = [this] { CommandRotate(); };
    commandFunction[KEY_A] = [this] { CommandMoveLeft(); };
    commandFunction[KEY_D] = [this] { CommandMoveRight(); };
    commandFunction[KEY_S] = [this] { CommandMoveDown(); };
    m_game = game;
}

CControl::~CControl()
{
}


void CControl::KeyEvent()
{
    while (m_game->IsRunning())
    {
        command = CUtils::GetCharFromKeyBorad();
        commandFunction[command]();
    }

}

void CControl::StartControlListener()
{
    std::thread t(&CControl::KeyEvent, this);
    t.detach();
}

void CControl::CommandQuit()
{
    m_game->Quit();
}

void CControl::CommandRotate()
{
    m_game->Rotate();
}

void CControl::CommandMoveLeft()
{
    m_game->Left();
}

void CControl::CommandMoveRight()
{
    m_game->Right();
}

void CControl::CommandMoveDown()
{
    m_game->Down();
}
