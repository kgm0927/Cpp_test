#include <iostream>
#include <string>
using namespace std;


class Book
{
	string name;
	int price;
	int pages;

public:
	Book(string name,int price,int pages) {
		this->name = name;
		this->pages = pages;
		this->price = price;
	}
	

	bool operator ==(int money) {
		if (price==money)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	bool operator ==(string name) {
		if (this->name == name) {
			return true;
		}
		else
		{
			return false;
		}
	}

	bool operator ==(Book a) {
		if (this->name==a.name and this->pages==a.pages and this->price==a.price)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

};

int main() {
	Book a("��ǰ C++", 30000, 500), b("��ǰ C++", 30000, 500);
	if (a == 30000) cout << "���� 30000��" << endl;
	if (a == "��ǰ C++")cout << "��ǰ C++ �Դϴ�." << endl;
	if (a == b)cout << "�� å�� ���� å�Դϴ�." << endl;
}