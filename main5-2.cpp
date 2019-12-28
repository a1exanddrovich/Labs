//produced by a1exanddrovich

#include <iostream>

using namespace std;

int main() {

	int n = 0;
	int m = 0;
	bool is_decrease = true;

	cout << "Enter the number of lines: ";
	cin >> n;
	cout << "Enter the number of columns: ";
	cin >> m;

	int **arr = new int *[n];

	for (int i = 0; i < n; i++)
		arr[i] = new int[m];

	int *b = new int[n];

	cout << endl << "Fill the matrix in" << endl;

	for (int i = 0; i < n; i++) {

		for (int j = 0; j < m; j++)
			cin >> arr[i][j];

	}

	for (int i = 0; i < n; i++) {

		for (int j = 0; j < m; j++) {

			if (j == m - 1)
				break;

			if (arr[i][j] > arr[i][j + 1])
				is_decrease = true;

			else {
				is_decrease = false;
				break;
			}


		}

		if (is_decrease)
			b[i] = 1;

		else
			b[i] = 0;

	}

	cout << endl << "Your array is ";

	for (int i = 0; i < n; i++)
		cout << b[i] << " ";

	cout << endl;

	for (int i = 0; i < n; i++)
		delete[] arr[i];

	delete[] arr;
	delete[] b;

	return 0;

}