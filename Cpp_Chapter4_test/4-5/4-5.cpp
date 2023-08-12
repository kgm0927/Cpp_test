#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다.)";
	string s;

	getline(cin, s, '\n');

	while (s!="exit")
	{


		


		srand((unsigned)time(0));
		int range = rand() % s.length();

		if (range == 0) {
			range = 1;
		}

		int choose_ch = rand() % range;

		if (choose_ch == 0) {
			choose_ch = 1;
		}


		int letter = rand() % ((int)'z' - (int)'a');
		s[choose_ch] = (char)letter;

		cout << s << endl;
		getline(cin, s, '\n');

	}



}