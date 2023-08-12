#include <iostream>
using namespace std;

int big(int one,int two) {
	int result=(one > two) ? one : two;
	return result;
}

int big(int one,int two,int three) {
	int result = (one > two) ? one : two;
	result = (result > three) ? result : three;
	return result;
}
int main() {
	int x = big(3, 5);
	int y = big(300, 60);
	int z = big(30, 60, 50);
	cout << x << ' ' << y << ' ' << z << endl;
}