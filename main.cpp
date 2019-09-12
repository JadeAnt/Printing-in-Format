#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	int c = 4;

	for (int i = 0; i < 5; i++) { // change line

		for (int k = c; k >= 0; k--) {
			cout << " ";
		}

		for (int j = 0; j < i+1; j++) {//print the row


			switch ((i % 3)) {
			case 0: cout << "*"; break;
			case 1: cout << "-"; break;
			case 2: cout << "."; break;
			}
		}

		c = c - 1;
		cout << "\n";
	}



	system("pause");
	return 0;
}
