#include <iostream>
using namespace std;

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
	friend Circle& operator+(Circle op1,int a) {
		Circle tmp;
		tmp.radius = op1.radius + a;
		return tmp;
	}
};

int main() {
	Circle a(5), b(4);
	b = a + 1;
	a.show();
	b.show();

}