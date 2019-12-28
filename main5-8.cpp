//produced by a1exanddrovich

#include <iostream>

using namespace std;

int main() {

	int n = 0, m = 0;

	cout << "Enter the number of lines: ";
	cin >> n;
	cout << "Enter the number of columns: ";
	cin >> m;

	int **arr = new int *[n];

	for (int i = 0; i < n; i++)
		arr[i] = new int[m];

	cout << endl << "Fill the matrix in" << endl;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> arr[i][j];

	for (int i = 1; i < n; i++) {

		for (int k = i; k > 0; k--) {

			int sum = 0, pre_sum = 0;

			for (int j = 0; j < m; j++) {

				sum += arr[k][j];
				pre_sum += arr[k - 1][j];

			}

			if (sum < pre_sum)
				for (int q = 0; q < m; q++) {

					int temp = arr[k - 1][q];
					arr[k - 1][q] = arr[k][q];
					arr[k][q] = temp;

				}

		}

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