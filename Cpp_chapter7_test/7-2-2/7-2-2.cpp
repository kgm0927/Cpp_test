#include <iostream>
#include <string>
using namespace std;

class Book;

bool operator==(Book op1, int money);

bool operator==(Book op1, string name);
bool operator==(Book op1, Book op2);

class Book
{
	string name;
	int price;
	int pages;

public:
	Book(string name, int price, int pages) {
		this->name = name;
		this->pages = pages;
		this->price = price;
	}

	friend bool operator ==(Book op1, int money);
	friend bool operator==(Book op1, string name);
	friend bool operator==(Book op1,Book op2);


};

bool operator ==(Book op1, int money) {
	if (op1.price == money) {
		return true;
	}
	else
	{
		return false;
	}
 }
bool operator ==(Book op1, string name) {
	if (op1.name==name)
	{
		return true;
	}
	else {
		return false;
	}
}
bool operator ==(Book op1, Book op2) {
	if (op1.name==op2.name and op1.pages==op2.pages and op1.price==op2.price)
	{

	}
}
