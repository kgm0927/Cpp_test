#include <iostream>
#include <string>
using namespace std;

class MyIntStack
{
	int* p;
	int size;
	int tos;

public:
	
	MyIntStack(int size) {
		this->size = size;
		tos = -1;
		p = new int[size];
	}
	MyIntStack(const MyIntStack& s) {
		this->size = s.size;
		this->tos = s.tos;
		this->p = new int[size];
		for (int i = 0; i < size; i++)
		{
			this->p[i] = s.p[i];// 내가 헷갈려 했던 부분
		}

	}

	bool push(int n) {
		if (tos <= (size - 1)) {
			p[++tos] = n;
			return true;
		}
		else {
			return false;
		}
	}
	bool pop(int& n) {

		if (tos >= 0) {
			n = p[tos--];
			return true;
		}else
		{
			return false;
		}

	}

	~MyIntStack() {
		delete[]p;
	}



};


int main() {
	MyIntStack a(10);
	a.push(10);
	a.push(20);
	MyIntStack b = a;
	b.push(30);

	int n;
	a.pop(n);
	cout << "스택 a에서 팝한 값 " << n << endl;
	b.pop(n);
	cout << "스택 b에서 팝한 값" << n << endl;
}