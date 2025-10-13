#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

int main() {

	int n;
	cout << "Enter size: ";
	cin >> n;

	int* arr = new int[n];

	for (int i = 0; i < n; i++) {
		cout << "Number " << i + 1 << ": ";
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;

	delete[] arr; //must delete 

	return 0;
}
