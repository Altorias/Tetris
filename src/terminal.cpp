//
// Created by Altorias on 2024-06-24.
//

#include "terminal.h"
#include <iostream>

#define CSI "\033["

void TerminalControl::MoveCursor(int row, int col)
{
    std::cout << CSI << row << ";" << col << "H";
}

void TerminalControl::SetFrontColor(int id)
{
    std::cout << CSI << "38;5;" << id << "m";
}

void TerminalControl::SetBackgroundColor(int id)
{
    std::cout << CSI << "48;5;" << id << "m";
}

void TerminalControl::CleanScreen()
{
    std::cout << CSI << "2J";
}

void TerminalControl::ResetColor()
{
    std::cout << CSI << "0m";
}

void TerminalControl::HideCursor()
{
    std::cout << CSI << "?25l";
}

void TerminalControl::ShowCursor()
{
    std::cout << CSI << "?25h";
}
