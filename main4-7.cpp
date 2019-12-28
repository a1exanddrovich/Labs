//produced by a1exanddrovich

#include <iostream>

using namespace std;

int main() {

	const int SIZE = 10;

	int n = 0;

	int arr[SIZE];

	cout << "Enter your array: " << endl;

	for (int i = 0; i < SIZE; i++)
		cin >> arr[i];

	cout << "Enter the number of shifts: ";
	cin >> n;

	for (int i = 0; i < n; i++) {

		int k = arr[SIZE - 1];

		for (int j = SIZE - 1; j >= 0; j--) {

			if (j == 0) {

				arr[j] = k;
				break;

			}

			arr[j] = arr[j - 1];

		}

	}

	for (int i = 0; i < SIZE; i++)
		cout << arr[i] << " ";

	return 0;

}