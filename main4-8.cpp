//produced by a1exanddrovich

#include <iostream>

using namespace std;

int main() {

	const int SIZE = 10;

	int arr[SIZE];

	cout << "Enter your array: " << endl;
	
	for (int i = 0; i < SIZE; i++)
		cin >> arr[i];
	
	int k = 0;
	int i = 0;

	for (i; i < SIZE; i++) {

		if (arr[i] < 0) {

			int temp = arr[i];

			for (i; i > k; i--) {

				arr[i] = arr[i - 1];

				if (i == k + 1)
					arr[i - 1] = temp;

			}

			i = ++k;

		}

	}

	for (int i = 0; i < SIZE; i++)
		cout << arr[i] << " ";

	return 0;

}