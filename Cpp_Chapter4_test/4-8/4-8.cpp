#include <iostream>
using namespace std;

class Circle
{
	int radius; // ���� ������ ��

public:
	void setRadius(int radius) {
		this->radius = radius;

	}// �������� �����Ѵ�.
	double getArea() {
		return 3.14 * radius * radius;
	}// ������ �����Ѵ�.

};


int main() {
	int cnt = 0, num;

	cout << "���� ����>>";
	cin >> num;
	Circle* circles = new Circle[num];


	for (int i = 0; i < num; i++)
	{
		int r;
		cout << "�� " << i + 1 << "�� ������ >> ";
		cin >> r;
		circles[i].setRadius(r);

		if (circles[i].getArea() > 100) {
			cnt++;
		}

	}

	cout << "������ 100���� ū ���� " << cnt << "�� �Դϴ�." << endl;

	return 0;
}

