#include <iostream>
using namespace std;

class Person {
	string name;
public:
	Person(){}

	void setName(string name) { this->name = name; }
	string getName() { return name; }
};

class Family {
	Person* p;
	int size;
	string last_name;

public:
	
	Family(string name, int size) {

		last_name = name;
		this->size = size;
		p = new Person[size];
	
	}

	~Family() {
		delete[]p;
	}
	void show() {
		cout << "Simpson가족은 다음과 같이 3명 입니다."<<endl;
		for (int i = 0; i < size; i++)
		{
			cout << p[i].getName() << '\t' ;
		}
	}

	void setName(int size,string name) {
		p[size].setName(name);

	}

	
};

int main() {
	Family* simpson = new Family("Simpson", 3);
	simpson->setName(0, "Mr.Simspon");
	simpson->setName(1, "Mrs. Simpson");
	simpson->setName(2, "Bart Simpson");
	simpson->show();

	delete simpson;

}