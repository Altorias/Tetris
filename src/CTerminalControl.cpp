//
// Created by Altorias on 2024-06-24.
//

#include "CTerminalControl.h"
#include <iostream>

#define CSI "\033["

void CTerminalControl::MoveCursor(int row, int col)
{
    std::cout << CSI << row << ";" << col << "H";
}

void CTerminalControl::SetFrontColor(int id)
{
    std::cout << CSI << "38;5;" << id << "m";
}

void CTerminalControl::SetBackgroundColor(int id)
{
    std::cout << CSI << "48;5;" << id << "m";
}

void CTerminalControl::CleanScreen()
{
    std::cout << CSI << "2J";
}

void CTerminalControl::ResetColor()
{
    std::cout << CSI << "0m";
}

void CTerminalControl::HideCursor()
{
    std::cout << CSI << "?25l";
}

void CTerminalControl::ShowCursor()
{
    std::cout << CSI << "?25h";
}
