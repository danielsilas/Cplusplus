#include <iostream>
#include <fstream>
using namespace std;
int fr[100];
int main() {

	ifstream fin("bac.txt");
	int num;
	int mini = 10;
	while (fin >> num) {
		while (num > 9) {
			int r = num % 100 / 10 * 10 + num % 10;
			++fr[r];
			num /= 10;
		}
	}
	for (int i=99;i>=10;i--)
		if (fr[i] == 2) cout << i << " ";
	return 0;
}

