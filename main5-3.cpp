//produced by a1exanddrovich

#include <iostream>

using namespace std;

int main() {

	int n = 0, m = 0;

	cout << "Enter the number of lines: ";
	cin >> n;
	cout << "Enter the number of columns: ";
	cin >> m;

	int *b = new int[n];

	int **arr = new int*[n];

	for (int i = 0; i < n; i++)
		arr[i] = new int[m];

	cout << endl << "Fill the matrix in:" << endl;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> arr[i][j];

	for (int i = 0; i < n; i++) {

		bool sym = true;

		for (int j = 0, k = m - 1; j < m / 2; j++, k--) {

			if (arr[i][j] != arr[i][k]) {

				sym = false;
				break;

			}

		}

		if (sym)
			b[i] = 1;

		else
			b[i] = 0;

	}

	cout << "The resulting array is: ";

	for (int i = 0; i < n; i++)
		cout << b[i] << " ";

	cout << endl << endl;

	delete[] b;

	for (int i = 0; i < n; i++)
		delete[]arr[i];

	delete[] arr;

	return 0;

}