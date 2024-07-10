//
// Created by Altorias on 2024-06-25.
//

#include "CDraw.h"

#include <iostream>

#include "CTerminalControl.h"
#include "CUtils.h"


CDraw::CDraw()
{
    this->current_syle = style3;
}

CDraw::~CDraw()
{
}

void CDraw::CreateWindow(int top, int left, int width, int height, std::string title)
{
    // CTerminalControl::MoveCursor(top, block2col(left));
    for (int r = 0; r < height; r++)
    {
        CTerminalControl::MoveCursor(top + r, CUtils::BlockToColumn(left));
        for (int c = 0; c < width; c++)
        {
            if (r == 0)
            {
                if (c == 0)
                {
                    std::cout << CUtils::ConvertUTF32ToUTF8({this->current_syle[0], this->current_syle[1]});
                }
                else if (c == width - 1)
                {
                    std::cout << CUtils::ConvertUTF32ToUTF8({this->current_syle[2]});
                }
                else
                {
                    std::cout << CUtils::ConvertUTF32ToUTF8({this->current_syle[6], this->current_syle[6]});
                }
            }
            else if (r == height - 1)
            {
                if (c == 0)
                {
                    std::cout << CUtils::ConvertUTF32ToUTF8({this->current_syle[0], this->current_syle[3]});
                }
                else if (c == width - 1)
                {
                    std::cout << CUtils::ConvertUTF32ToUTF8({this->current_syle[4]});
                }
                else
                {
                    std::cout << CUtils::ConvertUTF32ToUTF8({this->current_syle[6], this->current_syle[6]});
                }
            }
            else
            {
                if (c == 0)
                {
                    std::cout << CUtils::ConvertUTF32ToUTF8({this->current_syle[0], this->current_syle[5]});
                }
                else if (c == width - 1)
                {
                    std::cout << CUtils::ConvertUTF32ToUTF8({this->current_syle[5]});
                }
                else
                {
                    std::cout << CUtils::ConvertUTF32ToUTF8({this->current_syle[0], this->current_syle[0]});
                }
            }
        }
    }
    CTerminalControl::MoveCursor(top, CUtils::BlockToColumn(left) + (width * 2 - title.length()) / 2);
    std::cout << title;
}
