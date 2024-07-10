//
// Created by Altorias on 2024-06-24.
//
#include <iostream>
#include <thread>
#include <chrono>

#include "CDraw.h"
#include "CTerminalControl.h"
#include "CUtils.h"
#include "CControl.h"
#include "CGame.h"


CGame cGame = CGame();
CControl cControl = CControl(&cGame);

void Init()
{
    CTerminalControl::CleanScreen();
    CTerminalControl::HideCursor();
    // CDraw cDraw = CDraw();
    // cDraw.CreateWindow(1, 1, 9, 6, "HOLD");
    // cDraw.CreateWindow(1, 10, 12, 22, "TETRIES");
    // cDraw.CreateWindow(7, 1, 9, 16, "STATUS");
    // cDraw.CreateWindow(19, 22, 8, 4, "INFO");
    // cDraw.CreateWindow(1, 22, 8, 18, "NEXT");

    cGame.Init();

    cControl.StartControlListener();


}

void Loop()
{
    int i = 0;

    while (cGame.IsRunning())
    {

        CTerminalControl::CleanScreen();

        // temp code
        CDraw cDraw = CDraw();
        cDraw.CreateWindow(1, 1, 9, 6, "HOLD");
        cDraw.CreateWindow(1, 10, 12, 22, "TETRIES");
        cDraw.CreateWindow(7, 1, 9, 16, "STATUS");
        cDraw.CreateWindow(19, 22, 8, 4, "INFO");
        cDraw.CreateWindow(1, 22, 8, 18, "NEXT");
        int fps = CUtils::FPS();
        std::cout << "FPS: " << fps << std::flush;


        CTerminalControl::MoveCursor(cGame.get_row(), CUtils::BlockToColumn(cGame.get_col()));
        
        CTerminalControl::SetBackgroundColor(15);
        std::cout << "  ";
        CTerminalControl::ResetColor();

        std::cout << std::flush;
        std::this_thread::sleep_for(8ms);
    }
}

void Exit()
{
    CTerminalControl::ShowCursor();
    CTerminalControl::ResetColor();
    CTerminalControl::CleanScreen();
    CTerminalControl::MoveCursor(1,1);
    CTerminalControl::SetFrontColor(9);
    std::cout<<"Good Bye!"<<std::endl;
}

int main()
{
    // std::cout << "\033[5;10H" << "\033[38;5;214m" << "Hello World" << "\033[10,1H" << std::endl;


    // TerminalControl::MoveCursor(5,10);
    // TerminalControl::SetFrontColor(214);
    // std::cout << "Hello World";
    // TerminalControl::MoveCursor(10,1);

    Init();
    Loop();
    Exit();


    return 0;
}
