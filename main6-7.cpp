//produced by a1exanddrovich

#include <iostream>
#include <string.h>

using namespace std;

int main() {

	char str[100];

	cout << "Enter your string: ";
	gets_s(str);

	cout << "There are these fixed point real numbers in your string" << endl;

	for (int i = 0; i < strlen(str); i++) {

		if (str[i] == 46) {

			int j = i + 1, k = i - 1;

			while (str[k] > 47 && str[k] < 58)
				k--;

			while (str[j] < 58 && str[j] > 47)
				j++;

			if (k == i - 1 || j == i + 1) continue;

			if (str[k + 1] == 48)
				k++;

			for (int q = k + 1; q < j; q++) {

				cout << str[q];

			}

			cout << "  ";

		}

	}

	cout << endl << "If there is nothing then there are no fixed point real numbers in your string" << endl;

	return 0;

}