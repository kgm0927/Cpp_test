#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cout << "문자열 입력>>";
	getline(cin, s, '\n');
	auto cnt = 0;

	for (int i = 0; i < s.length(); i++)
	{
		char compare=s.at(i);
		if (compare == 'a')
			cnt++;
	}

	cout << "문자 a는 "<<cnt<<"개 있습니다." << endl;
}


//2

