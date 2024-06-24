//
// Created by Altorias on 2024-06-24.
//
#include <iostream>
#include <thread>
#include <chrono>
#include "terminal.h"
using namespace std::chrono_literals;

int main()
{
    // std::cout << "\033[5;10H" << "\033[38;5;214m" << "Hello World" << "\033[10,1H" << std::endl;


    // TerminalControl::MoveCursor(5,10);
    // TerminalControl::SetFrontColor(214);
    // std::cout << "Hello World";
    // TerminalControl::MoveCursor(10,1);

    TerminalControl::HideCursor();

    int i = 0;

    while (true)
    {
        TerminalControl::CleanScreen();
        TerminalControl::MoveCursor(i++, 10);
        TerminalControl::SetBackgroundColor(15);
        std::cout<< "  ";
        TerminalControl::ResetColor();
        std::cout<<std::flush;
        std::this_thread::sleep_for(1s);
    }


    return 0;
}
