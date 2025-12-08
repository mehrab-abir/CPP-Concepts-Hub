#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include "core.h"

using namespace std;

int main() {
    int n;

    cout << "Enter size: ";
    cin >> n;

	int* reverseArray = reversing(n);

    //after reversing
    cout << "After reversing: ";
    for (int i = 0; i < n; i++) {
        cout << reverseArray[i] << " ";
    }
    cout << endl << endl;;
    //-------------------------------------------------------------------------------------------

    //Practice Problem 1
    cout << "Practice problrm 1: " << endl;

    int arrSize;
    cout << "Enter array size: ";
    cin >> arrSize;

    int* numbers = getArray(arrSize);

    //display array
    cout << "\nNumbers: ";
    for (int i = 0; i < arrSize; i++) {
        cout << numbers[i] << " ";
    }

    cout << endl;


    //------------------------------------------------------------------------

	return 0;
}
