#pragma once
class color {
	friend color operator + (color a, color b);
	friend color operator - (color a, color b);
public:
	color(); //standard constructor (set all 3 to 0)

	//standard get()s for the 3 colors
	int getRed();
	int getBlue();
	int getGreen();

	//one set() that is given all three values
	void set(int r, int b, int g);

	//print the three values in the following format:
	// R:redValue B:blueValue G:greenValue
	void print();

private: //the 3 values for red, green, blue
	int red;
	int blue;
	int green;
};

color operator * (int a, color b);
color operator / (color a, int b);