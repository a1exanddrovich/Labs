//produced by a1exanddrovich

#include <iostream>

using namespace std;

int main() {

	int n = 0, m = 0, count = 0;

	cout << "Enter the number of lines: ";
	cin >> n;
	cout << "Enter the number of columns: ";
	cin >> m;

	int **arr = new int *[n];

	for (int i = 0; i < n; i++)
		arr[i] = new int[m];

	cout << endl << "Fill the matrix in: " << endl;

	for (int i = 0; i < n; i++) {

		for (int j = 0; j < m; j++)
			cin >> arr[i][j];

	}

	for (int i = 0; i < n; i++) {

		for (int j = 0; j < m; j++) {

			bool is_sorted = true;

			for (int k = 0; k < j; k++) {

				if (arr[i][k] >= arr[i][j])
					is_sorted = false;

				if (!(is_sorted)) break;

			}

			if (is_sorted) {

				for (int k = m - 1; k > j; k--) {

					if (arr[i][k] <= arr[i][j])
						is_sorted = false;

					if (!(is_sorted)) break;

				}

				if (is_sorted)
					count++;

			}

		}

	}

	cout << endl << "The number of \"special\" elements is " << count << endl << endl;

	for (int i = 0; i < n; i++)
		delete[] arr[i];

	delete[] arr;

	return 0;

}