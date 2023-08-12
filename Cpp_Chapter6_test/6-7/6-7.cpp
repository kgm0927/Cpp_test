#include <iostream>
#include <time.h>
using namespace std;

class Random
{
public:
	static void seed() { srand((unsigned)time(0)); }


	static int nextInt(int min = 0, int max = 32767) {
		
		int a = 0;
		while (true) {
			a = rand() % (max + 1);
			if (min <= a)
				break;
		}
		return a;
	}


	static char nextAlphabet() {
		char alphabet;
		while (true)
		{
			alphabet = rand() % 'z';

			if (alphabet>='a' || ('A'<=alphabet and alphabet<='Z'))
			{
				break;
			}

		}
		return alphabet;
	}


	static double nextDouble() {
		double result;

		while (true)
		{
			result = rand()/32767;
			if (0 <= result && result <= 1) {
				break;
			}

		}

		return result;
	}



};
int main() {
	Random r;
	r.seed();

	cout << "1에서 100까지 랜던한 정수 10개를 출력한다."<<endl;

	for (int i = 0; i < 10; i++)
	{
		cout << r.nextInt() << " ";
	}
	cout << "알파벳을 랜덤하게 10개를 출력한다." << endl;
	
	for (int i = 0; i < 10; i++)
	{
		cout << r.nextAlphabet() << " ";
	}
	cout << "랜덤한 실수 10개를 출력한다" << endl;

	for (int i = 0; i < 10; i++)
	{
		cout << r.nextDouble() << " ";
	}

}