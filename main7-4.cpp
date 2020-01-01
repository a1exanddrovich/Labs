//produced by a1exanddrovich

#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;

int main() {

	struct Bus_timetable {

		int number;
		char type[10];
		char destination[25];
		double departure_time;
		double arrival_time;

	} *arr, *available_arr;

	int n = 0, k = 0;
	double time = 0;
	char dest[25];

	cout << "Fill the timetable in" << endl;

	cout << endl << "Enter the number of buses for today: ";
	cin >> n;

	arr = new Bus_timetable[n];
	available_arr = new Bus_timetable[n];

	cout << endl << "Enter information for each bus:" << endl;

	for (int i = 0; i < n; i++) {

		cout << endl << "Number: ";
		cin >> arr[i].number;
		cout << "Type: ";
		cin >> arr[i].type;
		cout << "Destination: ";
		cin >> arr[i].destination;
		cout << "Departure time: ";
		cin >> arr[i].departure_time;
		cout << "Arrival time: ";
		cin >> arr[i].arrival_time;

	}

	cout << endl << "Enter your destination: ";
	cin >> dest;

	cout << endl << "Enter the desired time: ";
	cin >> time;

	cout << endl;

	for (int i = 0; i < n; i++) { 

		if (!(_stricmp(arr[i].destination, dest)) && arr[i].arrival_time < time) {

				available_arr[k] = arr[i];
				k++;

		}

	}

	if (!k)
		cout << "There are no available bus flight" << endl << endl;

	if (k == 1) {

		cout << "There is this available bus flight: " << endl << endl;
		cout << "Bus number" << setw(20) << "Bus type" << setw(20) << "Destination" 
		<< setw(20) << "Departure time" << setw(20) << "Arrival time" << endl;
		cout << available_arr->number << setw(20) << available_arr->type << setw(20) 
		<< available_arr->destination << setw(20) << fixed << setprecision(2)
		<< available_arr->departure_time << setw(20) << fixed << setprecision(2) << available_arr->arrival_time << endl;
	}

	if (k > 1) {

		cout << "There is these available bus flight: " << endl;
		cout << "Bus number" << setw(20) << "Bus type" << setw(20) << "Destination"
		<< setw(20) << "Departure time" << setw(20) << "Arrival time" << endl;
		
		for (int i = 0; i < k; i++) {

			cout << available_arr[i].number << setw(20) << available_arr[i].type << setw(20)
			<< available_arr[i].destination << setw(20) << fixed << setprecision(2)
		    << available_arr[i].departure_time << setw(20) << fixed << setprecision(2) << available_arr[i].arrival_time << endl;

		}

	}

	delete[] arr;
	delete[] available_arr;

	return 0;

}
