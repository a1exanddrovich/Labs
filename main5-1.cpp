//produced by a1exanddrovich

#include <iostream>

using namespace std;

int main() {

	int n = 0;
	int m = 0;
	bool is_null = true;

	cout << "Enter the number of lines of the matrix: ";
	cin >> n;
	cout << "Enter the number of columns of the matrix: ";
	cin >> m;

	int **arr = new int *[n];

	for (int i = 0; i < n; i++)
		arr[i] = new int[m];

	int *b = new int[m];

	cout << endl << "Fill the matrix in" << endl << endl;

	for (int i = 0; i < n; i++) {

		for (int j = 0; j < m; j++)
			cin >> arr[i][j];

	}

	for (int i = 0; i < m; i++) {

		for (int j = 0; j < n; j++){

			if (arr[j][i] == 0)
				is_null = true;

			else {

				is_null = false;
				break;

			} 

		}

		if (is_null)
			b[i] = 0;

		else
			b[i] = 1;

	}

	cout << endl << "Your array is ";

	for (int i = 0; i < m; i++)
		cout << b[i] << " ";

	cout << endl;

	for (int i = 0; i < n; i++)
		delete[] arr[i];

	delete[] arr;
	delete[] b;

	return 0;

}