#pragma once
#include "B.h"
#include <iostream>
using namespace std;

class D2 :
    private B
{
    int d2;
public:
    D2(int x, int y)
        : B(y)
    {
        d2 = x;
    }
    void show_D2();
};

