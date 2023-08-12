#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << " 아래에 한 줄을 입력하세요. (exit를 입력하면 종료합니다)" << endl;
	string s;
	string reverse;


	while (true)
	{
		cout << ">>";
		getline(cin, s, '\n');

		if (0 == s.compare("exit")) {
			cout << " 프로그램 종료";
			break;
		}

		for (int i = s.length()-1; i >=0; i--)
		{
			reverse += s[i];



		}
		cout<<reverse<<endl;
		reverse = "";
	}
}