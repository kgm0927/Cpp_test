#include <iostream>
using namespace std;

class ArrayUtility2
{
public:
	static int* concat(int* s1, int* s2, int size) {
		int* send = new int[size];
		for (int i = 0; i < size/2; i++)
		{
			send[i] = s1[i];
		}
		for (int i = 0; i < size/2; i++)
		{
			send[i + 5] = s2[i];
		}

		return send;
	

	}
	static int* remove(int* s1, int* s2, int size, int& retSize) {
		int cnt = 0;
		int* send = new int[size];

		
		for (int i = 0; i < size/2; i++)
		{
			send[i] = s1[i];

		}

		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				if (send[i] == s2[j]) {
					++cnt;
					for (int k = i; k < size; k++)
					{
						send[k] = send[k + 1];
					}
				}
			}

		}



		retSize = cnt;
		return send;
	}
	
};

int main() {

	int size = 5;
	int x[5];
	int y[5];
	int retSize;

	int* p;

	cout << "정수를 5개 입력하라. 배열 x에 삽입한다.>>";
	for (int i = 0; i < 5; i++)
	{
		cin >> x[i];

	}
	cout << "정수를 5개 입력하라. 배열 y에 삽입한다.>>";

	for (int i = 0; i < 5; i++)
	{
		cin >> y[i];
	}

	cout << "합친 정수 배열을 출력한다.";
	p=ArrayUtility2::concat(x,y,size*2);

	for (int i = 0; i < size*2; i++)
	{
		cout << p[i] << " ";
	}

	delete[]p;
	cout << endl;

	p=ArrayUtility2::remove(x,y,5,retSize);
	cout << "배열 x[]에서 y[]를 뺀 결과를 출력한다. 개수는 " << retSize << endl;


	for (int i = 0; i <retSize; i++)
	{
		if (p[i] != NULL) {
			cout << p[i] << " ";
		}
	}

	delete[]p;


}