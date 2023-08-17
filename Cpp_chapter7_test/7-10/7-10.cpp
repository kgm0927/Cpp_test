#include <iostream>
using namespace std;

class Statistics {

	

	int* num;
	int size;
public:
	Statistics(int size=0) {

		this->size = size;
		this->num = new int[this->size];
	}

	bool operator!() {
		if (size == 0)
		{
			return true;
		}
		else return false;
	}
	

	Statistics& operator~() {
		for (int i = 0; i < size; i++)
		{
			cout << num[i] << " ";
		}
		cout << endl;
		return *this;
	}


	Statistics& operator<<(int number) {
	
		size += 1;

		Statistics tmp(size);
		for (int i = 0; i < size-1; i++)
		{
			tmp.num[i] = num[i];
		}
		tmp.num[size - 1] = number;


		delete[]this->num;
		this->num = new int[size];
		for (int i = 0; i < size; i++)
		{
			this->num[i] = tmp.num[i];
		}
		return *this;
	}

	Statistics& operator>>(int& result) {
		int sum = 0;
		result = 0;
		for (int i = 0; i < size; i++)
		{
			sum+= num[i];
		}
		result = sum/(size);
		return *this;
	}
	~Statistics()
	{
		delete[] num;
	}
};

int main() {
	Statistics stat;
	if (!stat) cout << "���� ��� ����Ÿ�� ����." << endl;

	int x[5];
	cout << "5 ���� ������ �Է��϶�>>";
	for (int i = 0; i < 5; i++) cin >> x[i];

	for (int i = 0; i < 5; i++) stat << x[i];
	stat << 100 << 200;
	~stat;

	int avg;
	stat >> avg;
	cout << "avg=" << avg << endl;
	
}

