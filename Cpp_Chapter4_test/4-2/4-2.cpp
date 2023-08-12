#include <iostream>
using namespace std;

int main() {
	int	num = 5;
	int *four = new int[num];
	int sum = 0;


	for (int i = 0; i < num; i++)
	{
		cin >> four[i];
	}
	for (int i = 0; i < num; i++)
	{
		sum += four[i];
	}
	cout << "ЦђБе " <<(double) sum / num;
}