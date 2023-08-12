#include <iostream>
#include <string>
using namespace std;

class Histogram
{

	string sentence;
public:
	Histogram(string sentence) {
		this->sentence = sentence;
	}
	void put(string plus) {
		sentence.append(plus);
	}
	void putc(char c) {
		sentence += c;
	}
	void print() {
		

		cout << sentence << endl;

		int cnt_letter = 0;
		for (int i = 0; i < sentence.length(); i++)
		{
			if (('a' <= sentence[i]) and (sentence[i]<= 'z') ) {
				cnt_letter += 1;
			}
			
			else if (('A' <= sentence[i]) and (sentence[i] <= 'Z')) {
				cnt_letter += 1;
			}

			else {
				continue;
			}
			
		}


		cout << "ÃÑ ¾ËÆÄºª ¼ö" << cnt_letter << endl << endl;
		
		

		for (char i = 'a'; i <='z'; i++)
		{
			int cnt = 0;

			for (int j = 0; j < sentence.length(); j++)
			{
				if (i == sentence.at(j)) {
					++cnt;
				}
				else if (toupper(i) == sentence.at(j)) {
					++cnt;
				}
				else {
					continue;
				}
			}

			cout << i << "(" << cnt << ")\t:";

			for (int i = 0; i < cnt; i++)
			{
				cout << "*";
			}
			cout << endl;


		}

		
	}



};

int main() {
	Histogram elvisHisto("Wise men say, only fools rush in But I can't help, ");
	elvisHisto.put("falling in love with you");
	elvisHisto.putc('-');
	elvisHisto.put("Elvis Presley");
	elvisHisto.print();
}