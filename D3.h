#pragma once
#include "B.h"
class D3 :
    private B
{
    int d3;
public:
    D3(int x, int y)
        : B(y)
    {
        d3 = x;
    }
    void show_D3();

};

