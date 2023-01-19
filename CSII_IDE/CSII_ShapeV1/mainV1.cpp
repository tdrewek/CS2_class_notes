#include <iostream>
#include "shape.hpp"

int main(){

    rectangle s1(5, 4);
    s1.move(3, 7);
    s1.draw();

    square s2(4);
    s2.move(6, 8);
    s2.draw();

    shape *tbl[4];
    tbl[0] = new rectangle(3, 4);
    tbl[1] = new circle(5);
    tbl[2] = new square(7);
    tbl[3] = new triangle(3, 8);

    int n = 0;
    for (int i = 0; i < 4; ++i){
        tbl[i]->draw();
        if (tbl[i]->isRectangle()) ++n;
    }
    std::cout << n << " Rectangles " << std::endl;
    for (int i = 0; i < 4; ++i){
        delete tbl[i];
    }

    return 0;
}