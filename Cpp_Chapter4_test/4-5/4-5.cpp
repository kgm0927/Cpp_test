#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	cout << "�Ʒ��� �� ���� �Է��ϼ���.(exit�� �Է��ϸ� �����մϴ�.)";
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