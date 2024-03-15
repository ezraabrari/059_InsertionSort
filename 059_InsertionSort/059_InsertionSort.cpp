// 059_InsertionSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int arr[12];
int n;

void input() {        //procedur untuk input

	while (true) {

		cout << "Masukan banyaknya elemen pada array : "; //output ke layar
		cin >> n; //input dari pengguna
		if (n <= 12) // jika n kurang dari atau sama dengan 12
			break; // keluar dari loop
		else {    // jika n lebih dari 12
			cout << "\nArray dapatmempunyai maksimal 20 elemen.\n"; // output ke layar

		}
	}
	cout << endl;
	cout << "====================" << endl;
	cout << "Masukan Elemen Array" << endl;
	cout << "====================" << endl;

	for (int i = 0; i < n; i++) {
		cout << "Data ke-" << (i + 1) << ":";
		cin >> arr[i];


	}
}

void insertionsort() {

	int i, temp, j;
	

	for (i = 1; i <= n - 1; i++) {
		temp = arr[i];
		j = i - 1; 
		while (j >= 0 && arr[j] > temp)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = temp;

	}


}

void display() {
	cout << endl;
	cout << "=================================" << endl;
	cout << "Element Array yang Telah tersusun" << endl;
	cout << "=================================" << endl;
	cout << endl;

	for (int j = 0; j < n; j++) {
		cout << arr[j];
		if (j < n - 1) {
			cout << "--->";
		}
	}
	cout << endl;
	cout << endl;

	cout << "jumlah pass = " << n - 1 << endl;
	cout << endl;
	cout << endl;
}

int main() {
	input();

	insertionsort();
	display();

	return 0;
}
