//prodeuced by a1exanddrovich
#include <iostream>

using namespace std;

int main() {

	const int SIZE = 11;

	int arr[SIZE];

	for (int i = 0; i < SIZE; i++)
		cin >> arr[i];

	int i = 0, j = SIZE - 1;

	while (i < j) {

		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		i++;
		j--;
	}

	for (int i = 0; i < SIZE; i++)
		cout << arr[i] << " ";

	return 0;

}