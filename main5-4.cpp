//produced by a1exanddrovich

#include <iostream>

using namespace std;

int main() {

	int n = 0, m = 0, count = 0;

	cout << "Enter the number of lines: ";
	cin >> n;
	cout << "Enter the number of columns: ";
	cin >> m;

	int **arr = new int*[n];

	for (int i = 0; i < n; i++)
		arr[i] = new int[m];

	cout << endl << "Fill the array in " << endl;

	for (int i = 0; i < n; i++) {

		for (int j = 0; j < m; j++)
			cin >> arr[i][j];

	}

	for (int i = 0; i < n; i++) {

		for (int j = 0; j < m; j++) {

			int sum = 0;

			for (int k = 0; k < n; k++) {

				if (k == i) continue;

				sum += arr[k][j];

			}

			if (arr[i][j] > sum)
				count++;

		}

	}

	cout << endl << "The number of \"special\" elements is " << count << endl;

	for (int i = 0; i < n; i++)
		delete[] arr[i];

	delete[] arr;

	return 0;

}