#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cout << "���ڿ� �Է�>>";
	getline(cin, s, '\n');
	auto cnt = 0;

	for (int i = 0; i < s.length(); i++)
	{
		char compare=s.at(i);
		if (compare == 'a')
			cnt++;
	}

	cout << "���� a�� "<<cnt<<"�� �ֽ��ϴ�." << endl;
}


//2

