#include <iostream>
using namespace std;

class Color
{
	int red;
	int green;
	int blue;
public:
	
	Color() :Color(0, 0, 0) {}
	 Color(int red, int green, int blue) {
		this->red = red;
		this->green = green;
		this->blue = blue;
	}
	
	void show() {
		cout << "red: " << red << " ,green: " << green << " ,red:" << red << endl;
}

	Color operator+(Color op2) {
		Color tmp;
		tmp.red = this->red + op2.red;
		tmp.green = this->green + op2.green;
		tmp.blue = this->blue + op2.blue;
		return tmp;
	}

	bool operator ==(Color op1) {
		if (this->red==op1.red and this->green==op1.green and this->blue== op1.blue)
		{
			return true;
		}
		else
		{
			return false;
		}
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