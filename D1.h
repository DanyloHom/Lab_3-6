#pragma once
#include "B.h"
#include <iostream>
using namespace std;

class D1 :
    private B
{
    int d1;
public:
    D1(int x, int y)
        : B(y)
    {
        d1 = x;
    }
    void show_D1();
 };

