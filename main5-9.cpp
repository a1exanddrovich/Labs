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


	for (int i = 1; i < m; i++) {

		for (int j = i; j > 0; j--) {

			int min = arr[0][j], pre_min = arr[0][j - 1];

			for (int k = 0; k < n; k++) {

				min = (arr[k][j] < min) ? arr[k][j] : min;
				pre_min = (arr[k][j - 1] < pre_min) ? arr[k][j - 1] : pre_min;

			}

			if (min < pre_min)
				for (int q = 0; q < n; q++) {

					int temp = arr[q][j - 1];
					arr[q][j - 1] = arr[q][j];
					arr[q][j] = temp;

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