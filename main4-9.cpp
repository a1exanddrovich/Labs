//produced by a1exanddrovich

#include <iostream>

using namespace std;

int main() {

	const int SIZE = 10;
	const int DIGIT_S = 10;
	const int OTHER_S = 10;
	int digit_count = 0, other_count = 0;


	char arr[SIZE];
	char digit[DIGIT_S];
	char other[OTHER_S];

	cout << "Enter your array: " << endl;

	for (int i = 0; i < SIZE; i++)
		cin >> arr[i];

	cout << endl;

	for (int i = 0; i < SIZE; i++) {

		if (arr[i] > 47 && arr[i] < 59) {

			digit[digit_count] = arr[i];
			digit_count++;

		}

		else {

			other[other_count] = arr[i];
			other_count++;

		}


	}

	cout << "The array with digits is" << endl;

	for (int i = 0; i < digit_count; i++)
		cout << digit[i] << " ";

	cout << endl;

	cout << "The array with other symbols is" << endl;

	for (int i = 0; i < other_count; i++)
		cout << other[i] << " ";

	cout << endl;

	return 0;
}