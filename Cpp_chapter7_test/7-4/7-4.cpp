#include <iostream>
#include <string>
using namespace std;
class Book {
	string name;
	int price;
	int pages;
public:
	Book(string name, int price, int pages) {
		this->name = name;
		this->price = price;
		this->pages = pages;
	}

	string getTitle() { return name; }

	friend bool operator <(string a,Book b) {

		if (a<b.name) {

			return true;

		}
		else
		{
			return false;
		}

	}

};

int main() {
	Book a("û��", 20000, 300);
	string b;
	cout << "å �̸��� �Է��ϼ���.";
	getline(cin, b);
	if (b<a)
	{
		cout << a.getTitle() << "�� " << b << "���� �ڿ� �ֱ���!" << endl;
	}
}