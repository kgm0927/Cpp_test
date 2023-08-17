#include <iostream>
using namespace std;

class Matrix;


class Matrix
{
	int one;
	int two;
	int three;
	int four;
public:
	Matrix() :Matrix(0, 0, 0, 0) {}
	Matrix(int one, int two, int three, int four) {
		this->one = one;
		this->two = two;
		this->three = three;
		this->four = four;
	}

	void show() {
		cout << "Matrix = { " << one << " " << two << " " << three << " " << four << " }" << endl;
	}

	friend Matrix operator+(Matrix op1, Matrix op2);
	friend Matrix& operator+=(Matrix &op1, Matrix op2);
	friend bool operator==(Matrix op1,Matrix op2);

};

Matrix operator+(Matrix op1, Matrix op2) {
	Matrix tmp;
	tmp.one = op1.one + op2.one;
	tmp.two = op1.two + op2.two;
	tmp.three = op1.three + op2.three;
	tmp.four = op1.four + op2.four;

	return tmp;

}

Matrix& operator +=(Matrix &op1, Matrix op2) {
	op1.one += op2.one;
	op1.two += op2.two;
	op1.three += op2.three;
	op1.four += op2.four;

	return op1;
}

bool operator==(Matrix op1,Matrix op2) {
	if (op1.one==op2.one && op1.two==op2.two && op1.three==op2.three &&op1.four==op2.four)
	{
		return true;
	}
	else
	{
		return false;
	}
	
}


int main() {
	Matrix a(1, 2, 3, 4), b(2, 3, 4, 5), c;
	c = a + b;
	a += b;

	a.show();
	b.show();
	c.show();

	if (a == c)
		cout << "a and c are the same" << endl;
}