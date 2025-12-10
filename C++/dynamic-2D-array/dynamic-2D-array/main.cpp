#include<iostream>

using namespace std;


int main() {

	int R, C;
	cout << "Number of rows: ";
	cin >> R;
	cout << "Number of colums: ";
	cin >> C;

	int rows = R;
	int cols = C;

	int** arr = new int* [rows];

	for (int i = 0; i < rows; i++) {
		arr[i] = new int[cols];
	}


	return 0;
}