#include <iostream>
using namespace std;
class Matrix
{
	int one;
	int two;
	int three;
	int four;
public:
	Matrix():Matrix(0,0,0,0){}
	Matrix(int one,int two,int three,int four) {
		this->one = one;
		this->two = two;
		this->three = three;
		this->four = four;
	}

	void show() {
		cout << "Matrix = { " << one << " " << two << " " << three << " " << four << " }"<<endl;
	}

	Matrix operator+(Matrix op1) {
		Matrix tmp;
		tmp.one = this->one + op1.one;
		tmp.two = this->two + op1.two;
		tmp.three = this->three + op1.three;
		tmp.four = this->four + op1.four;

		return tmp;

	}

	Matrix& operator+=(Matrix op1) {
		this->one += op1.one;
		this->two += op1.two;
		this->three += op1.three;
		this->four += op1.four;

		return *this;
	}

	bool operator==(Matrix op1) {
		if (this->one == op1.one and this->two == op1.two and this->three == op1.three and this->four == op1.four)
			return true;
		else
		{
			return false;
		}
		
	}
	
};

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