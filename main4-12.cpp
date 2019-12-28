//produced by a1exanddrovich

#include <iostream>

using namespace std;

int main() {

	const int SIZE = 10;

	int arr[SIZE];
	int count = 0;

	cout << "Enter your array: " << endl;

	for (int i = 0; i < SIZE; i++)
		cin >> arr[i];

	for (int i = 0; i < SIZE - 1; i++) {

		if (arr[i] > arr[i + 1])
			count++;

	}

	cout << "The number of inversions is " << count << endl;

	return 0;

}