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
		cout << "원 " << i << "의 반지름 >> ";
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

	cout << "면적이 100보다 큰 원은"<< cnt<<" 개 입니다." << endl;

}