#include <iostream>
#include <sstream>
using namespace std;
int main()
{
	string stroka1;
	string stroka2;
	getline(cin, stroka1);
	getline(cin, stroka2);
	int x[10], y[10];
	istringstream stream1(stroka1);
	istringstream stream2(stroka2);
	bool failure1 = false, failure2 = false;
	for (int i = 0; i < 10; ++i) {
		if (!(stream1 >> x[i])) {
			failure1 = true;
			break;
		}
	}
	for (int j = 0; j < 10; ++j) {
		if (!(stream2 >> y[j])) {
			failure2 = true;
			break;
		}
	}
	if (!(failure1) && !(failure2)) {
		int max = x[0] + y[0];
		for (int i = 0; i<10; ++i) {
			for (int j = i; j<10; ++j) {
				if ((x[i] + y[j])>max) {
					max = x[i] + y[j];
				}
			}
		}
		cout << max << endl;
		return 0;
	}
	else {
		cout << "An error has occurred while reading numbers" << endl;
	}
	return -1;
}
