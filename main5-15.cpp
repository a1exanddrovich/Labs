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

	int max = arr[0][0], line_max = 0, col_max = 0;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (abs(arr[i][j]) > max){

				max = abs(arr[i][j]);
				line_max = i;
				col_max = j;

			}

	for (int i = 0; i < n; i++)
		for (int j = col_max; j < m - 1; j++)
			arr[i][j] = arr[i][j + 1];

	m--;

	for (int i = line_max; i < n - 1; i++)
		for (int j = 0; j < m; j++)
			arr[i][j] = arr[i + 1][j];

	n--;

	cout << endl << "The processed matrix is " << endl;

	for (int i = 0; i < n; i++) {

		for (int j = 0; j < m; j++)
			cout << arr[i][j] << " ";

		cout << endl;

	}

	m++;
	n++;

	cout << endl;

	for (int i = 0; i < n; i++)
		delete[] arr[i];

	delete[] arr;

	return 0;

}