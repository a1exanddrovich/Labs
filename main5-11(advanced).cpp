//produced by a1exanddrovich

//advanced version

#include <iostream>

using namespace std;

int main() {

	int n = 0, m = 0, a = 0;

	cout << "Enter the number of lines: ";
	cin >> n;
	cout << "Enter the number of columns: ";
	cin >> m;

	int **arr = new int*[n];
	int *b = new int[n * m]; // n*m is the maximum possible number of saddle points

	for (int i = 0; i < n; i++)
		arr[i] = new int[m];

	cout << endl << "Fill the matrix in " << endl;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> arr[i][j];

	for (int i = 0; i < m; i++) {

		for (int j = 0; j < m; j++) {

			bool max_point = true, min_point = true;
			int min = arr[i][j], max = arr[i][j];

			for (int k = 0; k < m; k++) {

				if (k == j) continue;

				if (max < arr[i][k]) max_point = false;
				if (min > arr[i][k]) min_point = false;

				if (!(max_point) && !(min_point)) break;

			}

			if (max_point) {

				bool max_min = true;

				for (int q = 0; q < n; q++) {

					if (q == i) continue;

					if (arr[i][j] > arr[q][j]) {

						max_min = false;
						break;

					}

				}

				if (max_min) {

					b[a] = arr[i][j];
					a++;			

				}
					

			}

			if (min_point) {

				bool min_max = true;

				for (int q = 0; q < n; q++) {

					if (q == i) continue;

					if (arr[i][j] < arr[q][j]) {

						min_max = false;
						break;

					}

				}

				if (min_max) {

					b[a] = arr[i][j];
					a++;

				}
					

			}

		}

	}

	cout << endl << endl;

	if (a == 0)
		cout << "There are no saddle points in the matrix" << endl;

	if (a == 1)
		cout << "There is this saddle points in the matrix: " << b[0] << endl;

	if (a > 1) {

		cout << "There are these saddle points in the matrix: ";

		for (int i = 0; i < a; i++)
			cout << b[i] << " ";

		cout << endl;

	}

	for (int i = 0; i < n; i++)
		delete[] arr[i];

	delete[] arr;
	delete[] b;

	return 0;

}