//produced by a1exanddrovich

#include <iostream>
#include <string.h>

using namespace std;

int main() {

	char str[100];
	int count = 1;
	int min = 100;
	int min_str = 0;

	cout << "Enter your string: ";
	gets_s(str);

	for (int i = 0; i < strlen(str); i++) {

		if (str[i] == str[i + 1])
			count++;

		else {

			if (count < min) {

				min = count;
				min_str = i - count + 1;

			}

			count = 1;

		}

	}

	cout << "The shortest group is ";

	for (int i = min_str; i < min_str + min; i++)
		cout << str[i];

	cout << endl;

	return 0;

}