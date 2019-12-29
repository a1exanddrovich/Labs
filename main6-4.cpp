//produced by a1exanddrovich

#include <iostream>
#include <string.h>

using namespace std;

int main() {

	char str[100];
	int count = 1;

	cout << "Enter your string: ";
	gets_s(str);

	cout << "There are these groups with even number of elements in entered string: " << endl;

	for (int i = 0; i < strlen(str); i++) {

		if (str[i] == str[i + 1])
			count++;

		else {

			if (!(count % 2)) {

				for (int j = i - count + 1; j < i + 1; j++)
					cout << str[j];

				cout << " ";

			}

			count = 1;

		}

	}

	cout << endl << endl << "If there is nothing then there are no groups with even numbers of elements in intered string" << endl;

	return 0;

}