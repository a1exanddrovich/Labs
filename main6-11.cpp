//produced by a1exanddrovich

//at this stage of development 
//only space acts as a delimiter character

//it'll be improved soon

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string.h>

using namespace std;

int main() {

	char text[350];

	int *arr;

	int num = 1;

	cout << "Enter your text: " << endl;

	gets(text);

	cout << "The result is: ";

	_strlwr(text);

	for (int i = 0; i < strlen(text); i++)
		if (text[i] == ' ')
		   num++;
	
	arr = new int[num];

	arr[0] = 0;

	for (int i = 0, j = 1; i < strlen(text); i++) {

		if (text[i] == ' ') {

			arr[j] = i + 1;

			j++;

		}

	}

	for (int i = 0; i < num; i++)
		for (int j = i; j > 0; j--) {

			int k = arr[j];
			int h = arr[j - 1];

			if (text[k] < text[h]) {

				int temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;

			}

		}

	for (int i = 0; i < num; i++) {

		int k = arr[i];

		while (text[k] != ' ' && text[k] != '\0') {

			cout << text[k];

			k++;

		}

		cout << " ";

	}

	cout << endl;

	delete[] arr;

	return 0;

}