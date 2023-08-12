#include <iostream>
using namespace std;

class Sample {
	int* p;
	int size;
public:
	Sample(int n) { // ������
		size = n; p = new int[n]; // n�� ���� �迭�� ���� ����
	}
	void read(); // ���� �Ҵ� ���� ���� �迭 p�� ����ڷκ��� ������ �Է� ����
	void write();// ���� �迭�� ȭ�鿡 ���
	int big();	// ���� �迭���� ���� ū �� ����
	~Sample()
	{
		delete[]p;
	}
};

void Sample::read() {
	for (int i = 0; i < size-1; i++)
	{
		cin >> p[i];
	}
}

void Sample::write() {
	for (int i = 0; i < size-1; i++)
	{
		cout << p[i]<< " ";
	}
}

int Sample::big() {
	int max = p[0];
	for (int i = 1; i < size-1; i++)
	{
		if (max < p[i])
			max = p[i];
		else {
			continue;
		}
	}
	return max;
}

int main() {
	Sample s(10);
	s.read();	// Ű���忡�� ���� �迭 �б�
	s.write();

	cout << "���� ū ���� " << s.big() << endl;

}