#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << " �Ʒ��� �� ���� �Է��ϼ���. (exit�� �Է��ϸ� �����մϴ�)" << endl;
	string s;
	string reverse;


	while (true)
	{
		cout << ">>";
		getline(cin, s, '\n');

		if (0 == s.compare("exit")) {
			cout << " ���α׷� ����";
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