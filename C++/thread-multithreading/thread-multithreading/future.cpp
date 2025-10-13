#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<string>
#include<thread>
#include<future>
#include<chrono>

#include "future.h"

using namespace std;

int slowTask() {
	this_thread::sleep_for(chrono::seconds(2));
	return 43;
}

void calculateSum(promise<int>&promiseObj) {
	int sum = 0;

	for (int i = 1; i <= 10; i++) {
		sum = sum + i;
	}
	promiseObj.set_value(sum);
}


void Future() {
	//this runs asynchrnously
	future<int>resultFromSlowTask = async(launch::async, slowTask);

	cout << "Doing other work in main..." << endl << endl;

	//get the result from background task
	int value = resultFromSlowTask.get();

	cout << "Result: " << value << endl;

	cout << endl;

	promise<int>promiseObj;
	future<int>futureObj = promiseObj.get_future();

	thread t(calculateSum, ref(promiseObj));

	cout << "Waiting for summation result..." << endl;

	int summation = futureObj.get();

	cout << "Summation = " << summation << endl;

	t.join();
}