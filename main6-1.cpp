//produced by a1exanddrovich

#include <iostream>
#include <string.h>

using namespace std;

int main() {

	char str[100];
	int count = 0;
	int loc = 1;

	cout << "Enter your string: ";
	gets_s(str);

	for (int i = 0; i < strlen(str); i++) {

		if (str[i] == ' ')
			continue;

		if (str[i] == str[i + 1])
			loc++;

		else {

			loc = 1;

		}

		if (loc == 5)
			count++;

		if (loc > 5) {

			count--;
			loc = 1;

		}

	}

	cout << "The number of groups with five identical elements is " << count << endl;

	return 0;

}