#pragma once
#include <iostream>
using namespace std;

class B
{
	int b;
public:
	B()
		: b(0)
	{ }
	B(int x)
	{
		b = x;
	}

	void show_B();
};

