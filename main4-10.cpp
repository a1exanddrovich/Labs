//produced by a1exanddrovich

#include <iostream>

using namespace std;

int main() {

	const int SIZE = 10;

	int arr[SIZE];

	cout << "Enter your array: " << endl;

	for (int i = 0; i < SIZE; i++)
		cin >> arr[i];

	bool sym;
	int i = 0, j = SIZE - 1;

	for (i, j; i != SIZE / 2; i++, j--) {

		if (arr[i] == arr[j])
			sym = true;

		if (arr[i] != arr[j]) {

			sym = false;
			break;

		}
	}

	if (sym)
		cout << endl << "Your array is symmetrical" << endl;
	else
		cout << endl << "Your array isn't symmetrical" << endl;

	return 0;

}