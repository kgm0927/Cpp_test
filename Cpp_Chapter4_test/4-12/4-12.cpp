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

	cout << "�˻��ϰ��� �ϴ� ���� �̸�>>" << endl;
	cin >> name;

	for (int i = 0; i < size; i++)
	{
		if (p[i].getName()==name) {
			cout << p[i].getName() << "�� ������" << p[i].getArea() << endl;
			break;
		}
	}
}

void CircleManager::searchByArea() {
	int border;
	cout << "�ּ� ������ ������ �Է��ϼ���.>>";
	cin >> border;
	cout << border << "���� ū ���� �˻��մϴ�."<<endl;
	for (int i = 0; i < size; i++)
	{
		if (p[i].getArea() > border) {
			cout << p[i].getName() << "�� ������ " << p[i].getArea() << endl;
		}
	}
}

int main() {
	int size;
	cout << "���� ����>>";
	cin >> size;
	CircleManager cir(size);

	cir.searchByName();
	cir.searchByArea();
}