#include <iostream>
using namespace std;
void swap(int &a,int &b) {
	int tmp;

	tmp = b;
	b = a;
	a = tmp;


}

int main() {
	int a = 1;
	int b = 2;

	swap(a, b);


	cout << "a=" << a << ", b=" << b << endl;
}