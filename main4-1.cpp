//produced by a1exanddrovich

#include <iostream>

using namespace std;

int main() {

	const int SIZE = 10;
	int count = 0;

	char arr[SIZE];

	cout << "Entered size: " << SIZE << endl;
	cout << "Enter your array: " << endl;
	for (int i = 0; i < SIZE; i++) {

		cin >> arr[i];

	}

	for (int i = 0; i < SIZE; i++) {

		if (arr[i] >= 48 && arr[i] <= 57) {

			int j = i;

			while (j > count) {

				int temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
				j--;

			}

			count++;

		}

	}

	for (int i = 0; i < SIZE; i++) {

		cout << arr[i] << " ";

	}

	cout << endl;

	return 0;

}