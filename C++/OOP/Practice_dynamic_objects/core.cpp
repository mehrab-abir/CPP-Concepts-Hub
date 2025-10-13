#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
#include "core.h"

using namespace std;

//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/V
void comparison() {
	int a, b;
	char s;

	cout << "Enter first number: ";
	cin >> a;
	cout << "Enter second number: ";
	cin >> b;

	cout << "Enter the symbol: ";
	cin >> s;

	if (s == '>') {
		if (a > b) {
			cout << "Right";
		}
		else {
			cout << "Wrong";
		}
	}
	else if (s == '<') {
		if (a < b) {
			cout << "Right";
		}
		else {
			cout << "Wrong";
		}
	}
	else {
		if (a == b) {
			cout << "Right";
		}
		else {
			cout << "Wrong";
		}
	}
}

//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/W
void mathExpression() {
	int a, b, c;
	char s, q; //s= sign, q= equal sign

	cout << "Enter the mathematical expression: ";
	cin >> a >> s >> b >> q >> c;

	if (s == '+') {
		if (a + b == c) {
			cout << "Yes";
		}
		else {
			cout << a + b;
		}
	}
	else if (s == '-') {
		if (a - b == c) {
			cout << "Yes";
		}
		else {
			cout << a - b;
		}
	}
	else {
		if (a * b == c) {
			cout << "Yes";
		}
		else {
			cout << a * b;
		}
	}

}

//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/G
void palindromeArray() {
	int nums[100];

	int n;
	cout << "Enter array size: ";
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> nums[i];
	}

	int isPalindrome = 1;

	for (int left = 0, right = n - 1; left <= right; left++, right--) {
		if (nums[left] != nums[right]) {
			isPalindrome = 0;
			break;
		}
	}

	if (isPalindrome == 1) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
}


void sortNumbers() {
	int arr[100];

	int n;
	cout << "Enter array size: ";
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + n); //ascending order

	cout << "After sorting: ";
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

}

