#include <iostream>
using namespace std;

class Circle
{
	int radius; // 원의 반지름 값

public:
	void setRadius(int radius) {
		this->radius = radius;

	}// 반지름을 설정한다.
	double getArea() {
		return 3.14 * radius * radius;
	}// 면적을 리턴한다.

};


int main() {
	int cnt = 0, num;

	cout << "원의 개수>>";
	cin >> num;
	Circle* circles = new Circle[num];


	for (int i = 0; i < num; i++)
	{
		int r;
		cout << "원 " << i + 1 << "의 반지름 >> ";
		cin >> r;
		circles[i].setRadius(r);

		if (circles[i].getArea() > 100) {
			cnt++;
		}

	}

	cout << "면적인 100보다 큰 원은 " << cnt << "개 입니다." << endl;

	return 0;
}

