#include <iostream>
using namespace std;
#include <iostream>
using namespace std;

class Matrix
{
	int arr[4];
public:
	Matrix() :Matrix(0, 0, 0, 0) {}
	Matrix(int one, int two, int three, int four) {
		this->arr[0] = one;
		this->arr[1] = two;
		this->arr[2] = three;
		this->arr[3] = four;
	}


	friend int* operator>>(Matrix op1,int *arr2) {
		for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
		{
			arr2[i] = op1.arr[i];
		}

		return arr2;
		
	}

	friend Matrix& operator<<(Matrix& op1,int *arr2) {
		for (int i = (sizeof(arr) / sizeof(int)) - 1; i >= 0; i--)
		{
			op1.arr[i] = arr2[i];
		}
		return op1;
	}

	void show() {
		cout << "Matrix = { " << arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3] << " }" << endl;
	}
};

int main() {
	Matrix a(4, 3, 2, 1), b;
	int x[4], y[4] = { 1,2,3,4 };
	a >> x;
	b << y;

	for (int i = 0; i < 4; i++)
	{
		cout << x[i] << " ";
	}
	cout << endl;
	b.show();

}