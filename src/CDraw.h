//
// Created by Altorias on 2024-06-25.
//

#ifndef CDRAW_H
#define CDRAW_H
#include <string>
//
// 0	1	2	3	4	5	6	7	8	9	A	B	C	D	E	F
// U+250x	─	━	│	┃	┄	┅	┆	┇	┈	┉	┊	┋	┌	┍	┎	┏
// U+251x	┐	┑	┒	┓	└	┕	┖	┗	┘	┙	┚	┛	├	┝	┞	┟
// U+252x	┠	┡	┢	┣	┤	┥	┦	┧	┨	┩	┪	┫	┬	┭	┮	┯
// U+253x	┰	┱	┲	┳	┴	┵	┶	┷	┸	┹	┺	┻	┼	┽	┾	┿
// U+254x	╀	╁	╂	╃	╄	╅	╆	╇	╈	╉	╊	╋	╌	╍	╎	╏
// U+255x	═	║	╒	╓	╔	╕	╖	╗	╘	╙	╚	╛	╜	╝	╞	╟
// U+256x	╠	╡	╢	╣	╤	╥	╦	╧	╨	╩	╪	╫	╬	╭	╮	╯
// U+257x	╰	╱	╲	╳	╴	╵	╶	╷	╸	╹	╺	╻	╼	╽	╾	╿




class CDraw
{
public:
    void CreateWindow(int top, int left, int width, int height, std::string title);
    CDraw();
    ~CDraw();

private:
    std::u32string current_syle;
    const std::u32string style1=U" ┌┐└┘│─";
    const std::u32string style2=U" ┏┓┗┛┃━";
    const std::u32string style3=U" ╔╗╚╝║═";
    const std::u32string style4=U" ╒╕╘╛│─";
    const std::u32string style5=U" ╓╖╙╜║═";
    const std::u32string style6=U" ╭╮╰╯│─";
    const std::u32string style7=U" ╭╮╰╯┃━";
    const std::u32string style8=U" ╭╮╰╯║═";
    const std::u32string style9=U" ┌┐└┘╎╌";
};


#endif //CDRAW_H
