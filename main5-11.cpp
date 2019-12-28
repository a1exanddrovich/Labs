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

	cout << endl << "There are these saddle points in the matrix: ";

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

				if (max_min)
					cout << arr[i][j] << " ";

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

				if (min_max)
					cout << arr[i][j] << " ";

			}

		}

	}

	cout << endl << "(if there is nothing then there are no saddle points in the matrix)" << endl;

	for (int i = 0; i < n; i++)
		delete[] arr[i];

	delete[] arr;

	return 0;

}