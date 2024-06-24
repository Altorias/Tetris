//
// Created by Altorias on 2024-06-24.
//

#ifndef TERMINAL_H
#define TERMINAL_H


class TerminalControl
{
public:
    static void MoveCursor(int row, int col);

    static void SetFrontColor(int id);

    static void SetBackgroundColor(int id);

    static void CleanScreen();

    static void ResetColor();

    static void HideCursor();

    static void ShowCursor();
};


#endif //TERMINAL_H
