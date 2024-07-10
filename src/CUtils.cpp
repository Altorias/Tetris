//
// Created by Altorias on 2024-06-24.
//

#include "CUtils.h"

#include <chrono>
#include <codecvt>
#include <locale>
#include <termios.h>
using namespace std::chrono_literals;

int CUtils::FPS()
{
    static auto start = std::chrono::system_clock::now();
    auto end = start;
    static int frameCount = 0;
    static int fps = 0;

    end = std::chrono::system_clock::now();
    frameCount++;
    if (end - start > 1s)
    {
        fps = frameCount;

        frameCount = 0;
        start = end;
    }
    return fps;
}

std::string CUtils::ConvertUTF32ToUTF8(std::u32string targetString)
{
    static std::wstring_convert<std::codecvt_utf8<char32_t>, char32_t> convert;
    return convert.to_bytes(targetString);
}

char CUtils::GetCharFromKeyBorad()
{
    char c;
    struct termios oldt, newt;
    tcgetattr(0, &newt);
    oldt = newt;
    cfmakeraw(&newt);
    tcsetattr(0,TCSANOW, &newt);
    c = getchar();
    tcsetattr(0,TCSANOW, &oldt);
    return c;
}

int CUtils::BlockToColumn(int block)
{
    return 2 * block - 1;
}
