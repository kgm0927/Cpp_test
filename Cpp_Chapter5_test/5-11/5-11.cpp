#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include<string.h>
using namespace std;

class Book {
	char* title;
	int price;
public:
	Book(const char* title, int price) {
		title = new char[];
		this->price = price;
	}
	~Book() {

	}

	Book(const Book* buf) {

	}

	void set(char* title, int price) {

	}
	void show() {
		cout << title << ' ' << price << "¿ø" << endl;
	}
};