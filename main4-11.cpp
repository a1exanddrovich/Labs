//produced by a1exanddrovich

#include <iostream>

using namespace std;

int main() {

	const int SIZE = 10;

	int A[SIZE];
	int B[SIZE];

	cout << "Enter the fisrt array: " << endl;

	for (int i = 0; i < SIZE; i++)
		cin >> A[i];

	cout << endl;

	cout << "Enter the second array: " << endl;

	for (int i = 0; i < SIZE; i++)
		cin >> B[i];

	cout << endl;

	//sort the fisrt array in ascending order
	for (int i = SIZE - 1; i > -1; i--) {

		for (int j = 0; j < i; j++) {

			if (A[j]>A[j + 1]) {

				int temp = A[j];
				A[j] = A[j + 1];
				A[j + 1] = temp;

			}

		}

	}

	//search for min element that isn't contained in the second array
	int k = 0;

	for (k; k < SIZE;k++) {

		int j = 0;

		for (j; j < SIZE; j++){

			if (A[k] == B[j])
				break;

		}

		if (j == SIZE) break;

	}

	//output
	cout << "The min element in the first array which isn't in the second one is " << A[k] << endl;

	return 0;

}