#include <iostream>
#include <string>
using namespace std;

class Circle
{
	int radius;
	string name;
public:
	void setCircle(string name, int radius);
	double getArea();
	string getName();
	

};

void Circle::setCircle(string name,int radius) {
	this->name = name;
	this->radius = radius;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

string Circle::getName() {
	return name;
}


class CircleManager
{
	Circle* p;
	int size;
public:
	CircleManager(int size);
	~CircleManager();
	void searchByName();
	void searchByArea();

};

CircleManager::CircleManager(int size) {
	this->size = size;
	p = new Circle[size];

	for (int i = 0; i < size; i++)
	{
		int size_in;
		string name;

		cin >> name >> size_in;



		p[i].setCircle(name,size_in);
	}


}

CircleManager::~CircleManager() {
	delete[]p;
}

void CircleManager::searchByName() {

	string name;

	cout << "검색하고자 하는 원의 이름>>" << endl;
	cin >> name;

	for (int i = 0; i < size; i++)
	{
		if (p[i].getName()==name) {
			cout << p[i].getName() << "의 먼적은" << p[i].getArea() << endl;
			break;
		}
	}
}

void CircleManager::searchByArea() {
	int border;
	cout << "최소 면적을 정수로 입력하세요.>>";
	cin >> border;
	cout << border << "보다 큰 원을 검색합니다."<<endl;
	for (int i = 0; i < size; i++)
	{
		if (p[i].getArea() > border) {
			cout << p[i].getName() << "의 먼적은 " << p[i].getArea() << endl;
		}
	}
}

int main() {
	int size;
	cout << "원의 개수>>";
	cin >> size;
	CircleManager cir(size);

	cir.searchByName();
	cir.searchByArea();
}