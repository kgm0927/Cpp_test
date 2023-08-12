#include <iostream>
using namespace std;

class Container
{
	int size;
public:
	Container() { size = 10; }

	void fill();
	void consume(); // 1 ��ŭ �Һ��ϱ�
	int getSize();

};

void Container::fill() {
	size = 10;
}

void Container::consume() {
	--size;
}
int Container::getSize() {
	return size;
}


class CoffeeVendingMachine
{
	

	Container tong[3];	// 0�� Ŀ��, 1�� ��, 2�� ������ �ǹ�
	void fill();
	void selectEspresso();
	void selectAmericano();
	void selectSugarCoffee();
	void show();
public:
	void run();
};

void CoffeeVendingMachine::fill() {

	for (int i = 0; i < sizeof(tong)/sizeof(Container); i++)
	{
		tong[i].fill();
	}

}

void CoffeeVendingMachine::selectEspresso() {
	tong[0].consume();
	tong[1].consume();
	cout << "���������� �弼��."<<endl;
}

void CoffeeVendingMachine::selectAmericano() {
	tong[0].consume();
	tong[1].consume();
	tong[1].consume();
	cout << "�Ƹ޸�ī�� �弼��." << endl;
}

void CoffeeVendingMachine::selectSugarCoffee() {
	tong[0].consume();
	tong[1].consume();
	tong[1].consume();
	tong[2].consume();
	cout << "����Ŀ�� �弼��." << endl;
}
void CoffeeVendingMachine::show() {
	cout << "Ŀ�� " << tong[0].getSize() << "�� " << tong[1].getSize() << "���� " << tong[2].getSize()<<endl;
}
void CoffeeVendingMachine::run() {
	while (true)
	{
		cout << "�޴��� �����ּ���.(1:����������, 2:�Ƹ޸�ī��, 3:����Ŀ��, 4:�ܷ�����, 5:ä���)>>";
		int num;
		cin >> num;

		switch (num)
		{

		case 1:
			selectEspresso(); break;

		case 2:
			selectAmericano(); break;
		case 3:
			selectSugarCoffee(); break;
		case 4:
			show(); break;
		case 5:
			fill(); break;

		default:
			cout << "�߸��� �����Դϴ�.";
			break;
		}

	}
}


int main() {
	CoffeeVendingMachine machine;

	
	

	machine.run();
}