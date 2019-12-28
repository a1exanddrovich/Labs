//produced by a1exanddrovich

#include <iostream>

using namespace std;

int main() {

	const int SIZE = 10;

	int arr[SIZE];

	for (int i = 0; i < SIZE; i++)
		cin >> arr[i];

	for (int i = 1; i < SIZE; i++) {

		for (int j = i; j > 0; j--) {

			if (arr[j] < arr[j - 1]) {

				int temp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = temp;

			}

		}

	}

	for (int i = 0; i < SIZE; i++)
		cout << arr[i] << " ";

	return 0;

}