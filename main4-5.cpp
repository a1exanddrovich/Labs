//produced by a1exanddrovich

#include <iostream>

using namespace std;

int main() {

	const int SIZE = 10;

	int arr[SIZE];

	for (int i = 0; i < SIZE; i++)
		cin >> arr[i];

	cout << endl;

	for (int i = 0; i < SIZE; i++) {

		int count = 1;

		for (int j = 0; j < SIZE; j++) {

			if (i == j) continue;

			if (arr[i] == arr[j])
				count++;

		}

		if (count == 1)
			cout << arr[i] << endl;

	}

	return 0;

}