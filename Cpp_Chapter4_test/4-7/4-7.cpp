#include <iostream>
using namespace std;

class Circle
{
	int radius;
public:



	void setRadius(int radius) {

		this->radius = radius;
}
	double getArea() {
		return radius * radius * 3.14;
	}

};

int main() {
	Circle three[3];
	int cnt = 0;

	for (int i = 0; i < sizeof(three)/sizeof(Circle); i++)
	{
		cout << "�� " << i << "�� ������ >> ";
		int insert;
		cin >> insert;
		
		three->setRadius(insert);

	}


	for (int i = 0; i < sizeof(three)/sizeof(Circle); i++)
	{
		if (three[i].getArea() > 100) {
			cnt++;
		}
	}

	cout << "������ 100���� ū ����"<< cnt<<" �� �Դϴ�." << endl;

}