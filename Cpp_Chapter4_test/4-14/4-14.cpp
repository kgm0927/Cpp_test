#include <iostream>
#include <string>
#include <string.h>
using namespace std;
int main() {
	string a = "abcd";
	int cnt = 0;
	for (int i = 0; i < a.length(); i++)
	{
		if (('a' <= a[i]) and (a[i] <= 'z')) {
			cnt += 1;
		}
	}
	cout << cnt;

}