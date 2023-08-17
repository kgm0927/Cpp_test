#include <iostream>
using namespace std;
#define MAX 100
// 해결 못함.


class Stack
{
	int* stack;
	int size;
	int tos;

public:
Stack(int size=0){

	this->size = size;
	this->tos = size-1;
	stack =new int[size];

}

Stack& operator<<(int num) {

	this->size++;
	this->tos = size-1;
	Stack tmp(this->size);

	for (int i = 0; i < tos; i++)
	{
		tmp.stack[i] = this->stack[i];
	}
	tmp.stack[tos] = num;
	


	delete[]this->stack;
	this->stack = new int[size];

	for (int i = 0; i < size; i++)
	{
		this->stack[i] = tmp.stack[i];

	}


	return *this;


}

Stack operator >>(int& num) {
 
	int result;
	result=stack[tos--];

	num = result;

	return *this;
}

bool operator!() {
	if (size!=0)
	{
		return true;
	}
	else {
		return false;
	}
}

};

int main() {
	Stack stack;
	stack << 3 << 5 << 10;
	while (true)
	{
		if (!stack)
		{
			cout << " 없음";
			break;
		}
		int x;
		stack >> x;
		cout << x << ' ';
	}

	cout << endl;
}