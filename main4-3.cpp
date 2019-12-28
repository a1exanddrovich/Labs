//produced by a1exanddrovich

#include <iostream>

using namespace std;

int main() {

	const int SIZE = 10;
	int max = 1, max_arr;

	int arr[SIZE];

	cout << "Enter your array: " << endl;

	for (int i = 0; i < SIZE; i++)
		cin >> arr[i];

	for (int i = 0; i < SIZE; i++) {

		int rep = 1;

		for (int j = 0; j < SIZE; j++) {

			if (i == j) continue;

			if (arr[i] == arr[j])
				rep++;

		}

		if (rep > max) {
			max = rep;
			max_arr = arr[i];
		}


	}

	cout << "The most common number is " << max_arr << endl;

	cout << endl;

	return 0;

}