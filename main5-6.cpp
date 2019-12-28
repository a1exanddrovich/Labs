//produced by a1exanddrovich

#include <iostream>

using namespace std;

int main() {

	int n = 0, m = 0, count = 0;

	cout << "Enter the number of lines: ";
	cin >> n;
	cout << "Enter the number of columns: ";
	cin >> m;

	char *b = new char[n * m];

	char **arr = new char*[n];

	for (int i = 0; i < n; i++)
		arr[i] = new char [m];

	cout << endl << "Fill the matrix in" << endl;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> arr[i][j];

	for (int i = 0; i < n; i++) {

		for (int j = 0; j < m; j++) {

			bool dif = true;

			for (int k = 0; k < count; k++) {

				if (b[k] == arr[i][j]) {

					dif = false;
					break;

				}

			}

			if (dif) {

				b[count] = arr[i][j];
				count++;

			}
			
		}

	}

	cout << endl << "The number of different elements of the matrix is " << count << endl;

	for (int i = 0; i < n; i++)
		delete[] arr[i];

	delete[] arr;
	delete[] b;

	return 0;

}