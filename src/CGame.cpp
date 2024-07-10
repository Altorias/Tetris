//
// Created by Altorias on 2024-07-02.
//

#include "CGame.h"

void CGame::Init()
{
    running = true;
    row = 2;
    col = 15;
}

void CGame::Quit()
{
    running = false;
}

bool CGame::IsRunning()
{
    return running;
}

void CGame::Rotate()
{
    row--;
}

void CGame::Left()
{
    col--;
}

void CGame::Right()
{
    col++;
}

void CGame::Down()
{
    row++;
}
