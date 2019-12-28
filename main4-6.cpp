//produced by a1exanddrovich

#include <iostream>

using namespace std;

int main() {

	const int SIZE = 10;

	int arr[SIZE];
	int n = 0;

	cout << "Enter your array: " << endl;

	for (int i = 0; i < SIZE; i++)
	cin >> arr[i];

	cout << endl << "Enter the number of shifts: " << endl;

	cin >> n;

	for (int i = 1; i < n + 1; i++) {

		int temp = arr[0];

		for (int j = 0; j < SIZE; j++) {

			arr[j] = arr[j + 1];

			if (j == SIZE - 1)
				arr[j] = temp;

		}

	}

	cout << endl;

	for (int i = 0; i < SIZE; i++)
		cout << arr[i] << " ";

	cout << endl;

	return 0;

}