//produced by a1exanddrovich

#include <iostream>

using namespace std;

int main() {

	int n = 0;
	bool sym_matrix = true;

	cout << "(The matrix is square)" << endl;
	cout << "Enter the number of lines and columns: ";
	cin >> n;

	int **arr = new int*[n];

	for (int i = 0; i < n; i++)
		arr[i] = new int[n];

	cout << endl << "Fill the matrix in " << endl;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> arr[i][j];


	for (int k = n - 1, q = 0; k > 0; q++, k--) {

		for (int i = 0, j = n - 1; i < k; i++, j--) {
		
			if (arr[i][q] != arr[k][j]) {

				sym_matrix = false;

			} break;
		
		}

		if (!(sym_matrix)) break;
	}


	cout << endl;

	sym_matrix ? cout << "The matrix is symmetrical with respect to the side diagonal" << endl
		       : cout << "The matrix is asymmetrical with respect to the side diagonal" << endl;

	for (int i = 0; i < n; i++)
		delete[] arr[i];

	delete[] arr;

	return 0;

}