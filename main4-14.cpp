//produced by a1exanddrovich

#include <iostream>

using namespace std;

int main() {

	const int SIZE = 10;
	int count = 1, ucount = 0;

	char arr[SIZE];

	cout << "Enter your array: " << endl;

	for (int i = 0; i < SIZE; i++)
		cin >> arr[i];

	for (int i = 0; i < SIZE; i++) {

		for (int j = 0; j < SIZE; j++) {

			if (j == i) continue;

			if (arr[i] == arr[j])
				count++;

		}

		if (count == 1)
			ucount++;

		count = 1;

	}

	cout << "The number of unique elements is " << ucount << endl;

	return 0;

}