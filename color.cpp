#include "color.h"
#include <iostream>

using namespace std;

//standard constructor (set all 3 to 0)
color::color()
{
	red = 0;
	green = 0;
	blue = 0;
}

//standard get()s for the 3 colors
int color::getRed(){	return red;}
int color::getBlue(){	return blue;}
int color::getGreen(){	return green;}

void color::set(int r, int b, int g)
{
	if (r < 0)
		red = 0;
	else if (r > 255)
		red = 255;
	else
		red = r;
	if (b < 0)
		blue = 0;
	else if (b > 255)
		blue = 255;
	else
		blue = b;
	if (g < 0)
		green = 0;
	else if (g > 255)
		green = 255;
	else
		green = g;
}

//print the three values in the following format:
// R:redValue B:blueValue G:greenValue
void color::print()
{
	cout << "R:" << red << " B:" << blue << " G:" << green << "\n";
}

//All operators ensure the values of the members in the returned color are 0-255 as described above.
color operator+(color a, color b)
{
	color c = color();
	c.set(a.red + b.red, a.blue + b.blue, a.green + b.green);
	return c;
}
color operator-(color a, color b)
{
	color c = color();
	c.set(a.red - b.red, a.blue - b.blue, a.green - b.green);
	return c;
}
color operator*(int a, color b)
{
	color c = color();
	c.set(a*b.getRed(), a*b.getBlue(), a*b.getGreen());
	return c;
}
color operator/(color a, int b)
{
	color c = color();
	if (b > 0)
		c.set(a.getRed() / b, a.getBlue() / b, a.getGreen() / b);
	return c;
}
