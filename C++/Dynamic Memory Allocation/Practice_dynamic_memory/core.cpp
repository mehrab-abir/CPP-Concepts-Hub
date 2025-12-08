#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include "core.h"

using namespace std;

//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/M

void capitalSmallDigit() {
    char x;
    cout << "Enter a character: ";
    cin >> x;

    if (int(x) >= 48 && int(x) <= 57) {
        cout << "IS DIGIT";
    }
    else if (int(x) >= 65 && int(x) <= 90) {
        cout << "ALPHA" << endl << "IS CAPITAL";
    }
    else {
        cout << "ALPHA" << endl << "IS SMALL";
    }
}

//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/C
void simpleCalc() {
    long long x, y;

    cout << "Enter first number: ";
    cin >> x;

    cout << "Enter second number: ";
    cin >> y;

    cout << x << " + " << y << " = " << x + y << endl;
    cout << x << " * " << y << " = " << x * y << endl;
    cout << x << " - " << y << " = " << x - y << endl;
}

//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/F
int* reversing(int n) {

    int* arr = new int[n];

    for (int i = 0; i < n; i++) {
        cout << "Number " << i + 1 << ": ";
        cin >> arr[i];
    }

    //reverse
    for (int i = 0, j = n - 1; i <= j; i++, j--) {
        swap(arr[i], arr[j]);
    }

    return arr;
}

//https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E
void maxNumber() {

    int arr[100];

    int n;
    cout << "How many numbers: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> arr[i];
    }

    int maxNumber = arr[0];

    for (int i = 1; i < n; i++) {
        maxNumber = max(maxNumber, arr[i]);
    }

    cout <<"Maximum = "<< maxNumber<<endl;
}


//Practice problem 1
int* getArray(int n) {
    int* arr = new int[n];

    for (int i = 0; i < n; i++) {
        cout << "Number " << i + 1 << ": ";
        cin >> arr[i];
    }

    return arr;
}

