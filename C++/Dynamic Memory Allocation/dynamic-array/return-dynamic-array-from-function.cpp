#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

//we have to use pointer here because the function returns the address of first index of the arary
/*
int* fun() {  
	int arr[5]; //static memory, gets deleted automatically after returning function

	for (int i = 0; i < 5; i++) {
		cout << "Number " << i + 1 << ": ";
		cin >> arr[i];
	}

	return arr;
}
*/


int* numbers() {
	int* nums = new int[5]; //dynamic memory allocation

	for (int i = 0; i < 5; i++) {
		cout << "Number " << i + 1 << ": ";
		cin >> nums[i];
	}

	return nums;
}

int main() {

	/*
	int* arr = fun();  //there is a pointer, because the function returns the address of first index of the arary

	for (int i = 0; i < 5; i++) {
		cout << arr[i] << " ";  // won't be printed in terminal, becasue it does not exist anymore in memory
	}

	cout << endl;

	delete[] arr; //must delete 
	
	*/

	int* numbersArray = numbers();
	
	for (int i = 0; i < 5; i++) {
		cout << numbersArray[i] << " ";  // will be printed in terminal
	}

	cout << endl;

	delete[] numbersArray;

	return 0;
}
