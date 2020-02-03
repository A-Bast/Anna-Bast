//-------------------------------------------------------------------------------
//                                 CS 215 - Fall 2019 - Lab 10 
//-------------------------------------------------------------------------------
// Name: Anna Bast
// Section: Lab Assistant
// Description: a program to test the color class
//-------------------------------------------------------------------------------
#include <iostream>
#include "color.h"
using namespace std;

int main() {
	color a, b, c;

	cout << "test sets\n";
	a.set(50, 150, 200);  a.print(); // 50  150  200
	a.set(-20, -1, -50);  a.print(); // 0  0  0
	a.set(300, 300, 300); a.print(); // 255  255  255

	cout << "\ntest + and -\n";
	a.set(20, 30, 40);
	b.set(100, 110, 120);
	c = a + b;  c.print();    // 120  140  160
	c = b - a;  c.print();    // 80  80  80
	b.set(240, 240, 240);
	c = a + b;  c.print();    // 255 255 255
	c = a - b;  c.print();    // 0  0  0

	cout << "\ntest * and /\n";
	c = 2 * a;   c.print();   // 40  60  80
	c = 10 * a;  c.print();   // 255 255 255
	c = -1 * a;  c.print();   // 0  0  0
	c = a / 2;   c.print();   // 10  15  20
	c = a / 100; c.print();   // 0  0  0
	c = a / -2;  c.print();   // 0  0  0
	c = a / 0;  c.print();   // 0  0  0
	system("pause");
	return 0;
}