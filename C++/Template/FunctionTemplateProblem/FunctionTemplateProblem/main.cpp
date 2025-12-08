#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>

using namespace std;

template<typename T>
void add(const T arr1[], const T arr2[], int size) {
	T* result = new T[size];

	for (int i = 0; i < size; i++) {
		result[i] = arr1[i] + arr2[i];
	}

	cout << "Final array: ";
	for (int i = 0; i < size; i++) {
		cout << result[i] << " ";
	}
	cout << endl;
	
	delete[] result;
}

//specializing for string
template<>
void add(const string str1[], const string str2[], int n) {
	string* result = new string[n];

	for (int i = 0; i < n; i++) {
		result[i] = str1[i] + " " + str2[i];
	}

	cout << "Final string: \n";
	for (int i = 0; i < n; i++) {
		cout << result[i] << "\n";
	}
	cout << endl;

	delete[] result;
}

template<typename Type1, typename Type2>
void Text(const Type1 arr[], Type2 str, int size) {

	cout << "\nNew function template: \n";
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " -> " << str << endl;
	}
	cout << endl;
}

int main() {
	int arr1[5] = { 3,6,4,7,1 };
	int arr2[5] = { 2,1,4,8,5 };

	add(arr1, arr2, 5);

	string str1[] = { "Hello","Mello","Gello" };
	string str2[] = { "Abul","Babul","Kabul" };

	add(str1, str2, 3);

	int newArr[3] = { 10,20,30 };

	Text(newArr, "Hello", 3);

	return 0;
}
