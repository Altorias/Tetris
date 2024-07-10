//
// Created by Altorias on 2024-06-24.
//

#ifndef UTILS_H
#define UTILS_H
#include <string>


class CUtils
{
public:
    static int FPS();

    static std::string ConvertUTF32ToUTF8(std::u32string targetString);

    static char GetCharFromKeyBorad();


    static int BlockToColumn(int block);
};


#endif //UTILS_H
