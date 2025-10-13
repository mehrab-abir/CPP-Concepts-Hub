#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>

using namespace std;

int main() {

	cout << "Max = " << max(3, 5) << endl;
	cout << "Max among multiple values = " << max({ 3, 5, 8, 6,9,15 }) << endl;

	cout << "Min = " << min(5, 4) << endl;
	cout << "Min among multiple values = " << min({5,8,1,3,6,9}) << endl;

	int a = 10, b = 20;

	cout << "Before swapping: " << endl;
	cout << "a = " << a << endl << "b = " << b << endl;

	swap(a, b);

	cout << "After swapping: " << endl;
	cout << "a = " << a << endl << "b = " << b << endl;

	cout << endl;

	int arr[5] = { 5,6,3,7,9 };

	int size = sizeof(arr) / sizeof(arr[0]);

	int maxItem = *max_element(arr, arr + size);
	int minItem = *min_element(arr, arr + size);

	cout << "Max arr item = " << maxItem << endl;
	cout << "Min arr item = " << minItem << endl;

	return 0;
}
