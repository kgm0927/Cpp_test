#include <iostream>
using namespace std;

class Sample {
	int* p;
	int size;
public:
	Sample(int n) { // 생성자
		size = n; p = new int[n]; // n개 정수 배열의 동적 생성
	}
	void read(); // 동적 할당 받은 정수 배열 p에 사용자로부터 정수를 입력 받음
	void write();// 정수 배열을 화면에 출력
	int big();	// 정수 배열에서 가장 큰 수 리턴
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
	s.read();	// 키보드에서 정수 배열 읽기
	s.write();

	cout << "가장 큰 수는 " << s.big() << endl;

}