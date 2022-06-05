#pragma once
#include "D1.h"
#include <iostream>
using namespace std;

class D4 :
    private D1
{
    int d4;
public:
    D4(int x, int y, int z)
        : D1(y, z)
    {
        d4 = x;
    }
    void show_D4();
};

