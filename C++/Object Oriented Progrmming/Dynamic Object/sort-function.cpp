#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm> 

using namespace std;

int main() {
	int arr[100];

	int n;
	cout << "Enter size: ";
	cin >> n;

	for (int i = 0; i < n; i++) {
		cout << "Number " << i + 1 << ": ";
		cin >> arr[i];
	}

	//sort function --must include algorithm header file to use sort function
	sort(arr, arr + n);

	//display array
	cout << "The array after sorting in ascending order: ";
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;
	//descending order
	sort(arr, arr + n, greater<int>());

	cout << "The array after sorting in descending order: ";
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;

	return 0;
}
