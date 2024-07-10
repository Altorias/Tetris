//
// Created by Altorias on 2024-07-02.
//

#ifndef CGAME_H
#define CGAME_H



class CGame {
private:
    bool running;
    int row;
    int col;
public:
    void Init();
    void Quit();
    bool IsRunning();

    void Rotate();
    void Left();
    void Right();
    void Down();

    [[nodiscard]] int get_row() const
    {
        return row;
    }

    void set_row(int row)
    {
        this->row = row;
    }

    [[nodiscard]] int get_col() const
    {
        return col;
    }

    void set_col(int col)
    {
        this->col = col;
    }
};



#endif //CGAME_H
