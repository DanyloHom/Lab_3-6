#include <iostream>
#include <Windows.h>
#include "D4.h"
#include "D5.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	B b(777);
	cout << "B b(777);" << endl;
	cout << "sizeof(B) = " << sizeof(B) << endl;
	cout << endl << "class B hierarchy: " << endl;
	b.show_B();
	D1 o1(111, 222);
	cout << "D1 o1(111, 222);" << endl;
	cout << "sizeof(D1) = " << sizeof(D1) << endl;
	cout << endl << "class D1 hierarchy: " << endl;
	o1.show_D1();
	D2 o2(1000, 2000);
	cout << "D2 o2(1000, 2000);" << endl;
	cout << "sizeof(D2) = " << sizeof(D2) << endl;
	cout << endl << "class D2 hierarchy: " << endl;
	o2.show_D2();
	D3 o3(100, 200);
	cout << "D3 o3(100, 200);" << endl;
	cout << "sizeof(D3) = " << sizeof(D3) << endl;
	cout << endl << "class D3 hierarchy: " << endl;
	o3.show_D3();
	D4 o4(1, 2, 3);
	cout << "D4 o4(1, 2, 3);" << endl;
	cout << "sizeof(D4) = " << sizeof(D4) << endl;
	cout << endl << "class D4 hierarchy: " << endl;
	o4.show_D4();
	D5 o5(10, 20, 30, 40, 50);
	cout << "D4 o4(1, 2, 3);" << endl;
	cout << "sizeof(D5) = " << sizeof(D5) << endl;
	cout << endl << "class D5 hierarchy: " << endl;
	o5.show_D5();
}