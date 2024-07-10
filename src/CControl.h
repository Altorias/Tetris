//
// Created by Altorias on 2024-07-02.
//

#ifndef CCONTROL_H
#define CCONTROL_H
#include "CGame.h"
#include "SelfDefine.h"


class CControl {
public:
    CControl(CGame* game);
    ~CControl();


    void KeyEvent();
    void StartControlListener();

    void CommandQuit();
    void CommandRotate();
    void CommandMoveLeft();
    void CommandMoveRight();
    void CommandMoveDown();

private:
    char command {};
    std::map<char, std::function<void()>> commandFunction{};

    CGame* m_game;
};



#endif //CCONTROL_H
