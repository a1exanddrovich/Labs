//produced by a1exanddrovich

#include <iostream>

using namespace std;

int main() {

	int n = 0;

	cout << "Square matrix only" << endl << endl;
	cout << "Enter the number of lines and columns: ";
	cin >> n;

	int **arr = new int*[n];

	for (int i = 0; i < n; i++)
		arr[i] = new int[n];

	cout << endl << "Fill the matrix in: " << endl;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> arr[i][j];

	int min = arr[0][1], max = arr[n - 1][n - 1];

	for (int i = 0, j = n - 1, k = 0; i < n - 1; i++, j--, k++) {

		for (int q = n - 1; q > k; q--) {

			min = arr[i][q] < min ? arr[i][q] : min;
			max = arr[j][q] > max ? arr[j][q] : max;

		}

	}

	
	cout << endl << "The maximum element of the matrix below the side diagonal is " << max << endl;
	cout << "The minimum element of the matrix above the main diagonal is " << min << endl << endl;

	for (int i = 0; i < n; i++)
		delete[] arr[i];

	delete[] arr;

	return 0;

}