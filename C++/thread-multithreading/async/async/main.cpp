#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<thread>
#include<future>

using namespace std;

int getSquare(int num) {
	return num*num;
}

int main() {
	int num;
	cout << "Enter your number: ";
	cin >> num; 

	future<int>finalData = async(launch::async, getSquare, num);
	cout <<"Square of " <<num<< ": "<<finalData.get() << endl;

	return 0;
}