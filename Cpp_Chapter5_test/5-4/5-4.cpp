#include <iostream>
using namespace std;


bool bigger(int a, int b, int& big) {

	if (a = b) { return true; }

	(a > b) ? big = a : big = b; return false;
}

int main() {

	int one;
	int two;
	cin >> one >> two;
	int big;

	bool result=bigger(one, two, big);

	cout << "result=" <<result << ", big=" << big << endl;


}