//produced by a1exanddrovich

#include <iostream>

using namespace std;

int main() {

	const int SIZE = 20;
	int num = 0;

	char arr[SIZE];

	cout << "Enter tne number of your array's elements: " << endl;

	cin >> num;

	cout << "Enter your array: " << endl;

	for (int i = 0; i < num; i++)
		cin >> arr[i];


	for (int i = 1; i < num; i++) {

		int j = i;

		while (arr[j - 1] > arr[j]) {

			int temp = arr[j - 1];
			arr[j - 1] = arr[j];
			arr[j] = temp;
			j--;
			if (j == 0) break;
		}

	}

	for (int i = 0; i < num; i++) {

		int count = 1;

		for (int j = 0; j < num; j++) {

			if (i == j) continue;

			if (arr[i] == arr[j])
				count++;

		}

		if (count != 1) {

			num -= count;

			for (int j = i; j < num; j++)
				arr[j] = arr[j + count];

		}

	}

	cout << "Your processed array: ";

	for (int i = 0; i < num; i++)
		cout << arr[i] << " ";

	cout << endl;

	return 0;

}