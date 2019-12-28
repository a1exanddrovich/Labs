//produced by a1exanddrovich

#include <iostream>

using namespace std;

int main() {

	int n = 0, m = 0;

	cout << "Enter the number of lines ";
	cin >> n;
	cout << "Enter the number of columns ";
	cin >> m;
	cout << endl;

	int **arr = new int*[n];

	for (int i = 0; i < n; i++)
		arr[i] = new int[m];

	cout << "Fill the matrix in " << endl << endl;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> arr[i][j];

	cout << endl << endl;

	for (int i = 1; i < n; i++) {

		int j = i;

		while (j > 0) {

			if (arr[j][0] < arr[j - 1][0]) {

				for (int k = 0; k < m; k++) {

					int temp = arr[j - 1][k];
					arr[j - 1][k] = arr[j][k];
					arr[j][k] = temp;

				}

			}

			j--;

		}

	}


	cout << "Here's the processed matrix " << endl << endl;

	for (int i = 0; i < n; i++) {

		for (int j = 0; j < m; j++)
			cout << arr[i][j] << " ";

		cout << endl;
	}

	for (int i = 0; i < n; i++)
		delete[] arr[i];

	delete[] arr;

	cout << endl << endl;

	return 0;

}