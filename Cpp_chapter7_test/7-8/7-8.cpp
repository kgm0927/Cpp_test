#include <iostream>
using namespace std;


class Circle
{
	int radius;

public:
	Circle(int radius = 0) { this->radius = radius; }
	void show() {
		cout << "radius= " << radius << " �� ��" << endl;
	}

	Circle& operator++() {// ����
		this->radius++;
		return *this;
	}

	Circle operator++(int n) {
		//����
		Circle tmp = *this;
		radius++;
		return tmp;
	}

};



int main() {
	Circle a(5), b(4);
	++a;
	b = a++;
	a.show();
	b.show();
}