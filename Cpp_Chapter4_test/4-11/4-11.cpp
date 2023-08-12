#include <iostream>
using namespace std;

class Container
{
	int size;
public:
	Container() { size = 10; }

	void fill();
	void consume(); // 1 만큼 소비하기
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
	

	Container tong[3];	// 0은 커피, 1은 물, 2는 설탕을 의미
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
	cout << "에스프레소 드세요."<<endl;
}

void CoffeeVendingMachine::selectAmericano() {
	tong[0].consume();
	tong[1].consume();
	tong[1].consume();
	cout << "아메리카노 드세요." << endl;
}

void CoffeeVendingMachine::selectSugarCoffee() {
	tong[0].consume();
	tong[1].consume();
	tong[1].consume();
	tong[2].consume();
	cout << "설탕커피 드세요." << endl;
}
void CoffeeVendingMachine::show() {
	cout << "커피 " << tong[0].getSize() << "물 " << tong[1].getSize() << "설탕 " << tong[2].getSize()<<endl;
}
void CoffeeVendingMachine::run() {
	while (true)
	{
		cout << "메뉴를 눌러주세요.(1:에스프레소, 2:아메리카노, 3:설탕커피, 4:잔량보기, 5:채우기)>>";
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
			cout << "잘못된 숫자입니다.";
			break;
		}

	}
}


int main() {
	CoffeeVendingMachine machine;

	
	

	machine.run();
}