//produced by a1exanddrovich

#include <iostream>

using namespace std;

int main() {

	int n = 0, m = 0;

	cout << "Enter the number of lines: ";
	cin >> n;
	cout << "Enter the number of columns: ";
	cin >> m;

	int **arr = new int*[n];

	for (int i = 0; i < n; i++)
		arr[i] = new int[m];

	cout << endl << "Fill the matrix in " << endl;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> arr[i][j];

	int max = arr[0][0], min = arr[0][0], line_max = 0, line_min = 0;

	for (int i = 0; i < n; i++) {

		for (int j = 0; j < m; j++) {

			if (arr[i][j] > max) {

				max = arr[i][j];
				line_max = i;

			}

			if (arr[i][j] < min) {

				min = arr[i][j];
				line_min = i;

			}

		}

	}

	for (int i = 0; i < m; i++) {

		int temp = arr[line_min][i];
		arr[line_min][i] = arr[line_max][i];
		arr[line_max][i] = temp;

	}

	cout << endl << "The processed matrix is " << endl;

	for (int i = 0; i < n; i++) {

		for (int j = 0; j < m; j++)
			cout << arr[i][j] << " ";

		cout << endl;

	}

	cout << endl;

	for (int i = 0; i < n; i++)
		delete[] arr[i];

	delete[] arr;

	return 0;

}