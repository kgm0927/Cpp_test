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
	cout << "�̸��� ��ȭ��ȣ�� �Է��� �ּ���.";
	Person P[3];
	string search_name;

	for (int i = 0; i < sizeof(P)/sizeof(Person); i++)
	{

		string name;
		string tel;
		cout << "��� " << i << ">> ";
		cin >> name >> tel;
		P[i].set(name,tel);
	}

	cout << "��� ����� �̸��� ";
	for (int i = 0; i < sizeof(P)/sizeof(Person); i++)
	{
		cout << P[i].getName()<<" ";
	}

	cout << endl;
	cout << "��ȭ��ȣ�� �˻��մϴ�. �̸��� �Է��ϼ���. >>";
	cin >> search_name;

	for (int i = 0; i < sizeof(P)/sizeof(Person); i++)
	{
		if (search_name.compare(P[i].getName()) == 0) {
			cout << "��ȭ��ȣ�� " << P[i].getTel();
			break;
		}
	}


}