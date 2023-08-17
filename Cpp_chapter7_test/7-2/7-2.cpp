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
	Book a("명품 C++", 30000, 500), b("고품 C++", 30000, 500);
	if (a == 30000) cout << "정가 30000원" << endl;
	if (a == "명품 C++")cout << "명품 C++ 입니다." << endl;
	if (a == b)cout << "두 책이 같은 책입니다." << endl;
}