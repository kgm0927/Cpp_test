#include <iostream>
using namespace std;


class Person
{

	string name;
	string tel;
public:
	
	string getName() { return name; }
	string getTel() { return tel; }
	void set(string name, string tel) {
		this->name = name;
		this->tel = tel;
	}


};

int main() {
	cout << "이름과 전화번호를 입력해 주세요.";
	Person P[3];
	string search_name;

	for (int i = 0; i < sizeof(P)/sizeof(Person); i++)
	{

		string name;
		string tel;
		cout << "사람 " << i << ">> ";
		cin >> name >> tel;
		P[i].set(name,tel);
	}

	cout << "모든 사람의 이름은 ";
	for (int i = 0; i < sizeof(P)/sizeof(Person); i++)
	{
		cout << P[i].getName()<<" ";
	}

	cout << endl;
	cout << "전화번호를 검색합니다. 이름을 입력하세요. >>";
	cin >> search_name;

	for (int i = 0; i < sizeof(P)/sizeof(Person); i++)
	{
		if (search_name.compare(P[i].getName()) == 0) {
			cout << "전화번호는 " << P[i].getTel();
			break;
		}
	}


}