#pragma once
#include "D2.h"
#include "D3.h"
using namespace std;

class D5 :
    public D2, private D3
{
    int d5;
public:
    D5(int x, int y, int z, int i, int j)
        : D2(y, z), D3(i, j)
    {
        d5 = x;
    }

    void show_D5();
};

