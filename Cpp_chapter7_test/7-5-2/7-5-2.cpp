#include <iostream>
#include <string>
using namespace std;

class Color;

Color operator +(Color op1,Color op2);
bool operator ==(Color op1, Color op2);

class Color
{
	int red;
	int green;
	int blue;
public:

	Color() :Color(0, 0, 0) {}
	Color(int r, int g, int b) {
		this->red = r; this->green = g; this->blue = b;
	}


	friend Color operator+(Color op1, Color op2) {
		Color tmp;
		tmp.red = op1.red + op2.red;
		tmp.green = op1.green + op2.green;
		tmp.blue = op1.blue + op2.blue;
		return tmp;
	}

	friend bool operator ==(Color op1, Color op2) {
		if (op1.blue==op2.blue and op1.green==op2.green and op1.blue==op2.blue){
			return true;
		}
		else
		{
			return false;
		}
	}
	void show() {
		cout << "red: " << red << " ,green: " << green << " ,red:" << red << endl;
	}
};



int main() {
	Color red(255, 0, 0), blue(0, 0, 255), c;
	c = red + blue;
	c.show();

	Color fuchsia(255, 0, 255);
	if (c == fuchsia)
		cout << "보라색 맞음";
	else
		cout << "보라색 아님";


}