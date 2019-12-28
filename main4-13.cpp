//produced by a1exanddrovich

#include <iostream>

using namespace std;

int main() {

	const int SIZE = 20;
	int num = 0;

	char arr[SIZE];

	
	cout << "Enter the number of your array's elements: " << endl;

	cin >> num;


	cout << "Enter your array: " << endl;

	for (int i = 0; i < num; i++)
		cin >> arr[i];

	for (int i = 0; i < num; i++) {

		for (int j = 0; j < num; j++) {

			if (i == j) continue;

			if (arr[i] == arr[j]) {

				for (int k = j; k < num - 1; k++)
					arr[k] = arr[k + 1];

				num--;

			}

		}

	}

	cout << "Your array without repetitions: " << endl;

	for (int i = 0; i < num; i++)
		cout << arr[i] << " ";

	cout << endl;

	return 0;

}