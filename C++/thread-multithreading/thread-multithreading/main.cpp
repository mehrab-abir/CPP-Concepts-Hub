#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<string>
#include<thread>
#include<mutex>

#include "atomics.h"
#include "future.h"

using namespace std;

mutex mtx; //to force the order of execution, allowing only one task at a time

void greet() {
	mtx.lock();
	cout << "Hello world!....from thread" << endl;
	mtx.unlock();
}

void sum() {
	mtx.lock();
	int n = 10, sum = 0;

	for (int i = 1; i <= n; i++) {
		sum = sum + i;
	}

	cout << "\nSummation = " << sum << endl;
	mtx.unlock();
}

void evenNums() {
	mtx.lock();
	int n = 20;

	for (int i = 1; i <= n; i++) {
		if (i % 2 == 0) {
			cout << i << " ";
		}
	}
	cout << endl;
	mtx.unlock();
}

void countOdds(int limit) {
	int count = 0;
	for (int i = 1; i <= limit; i++) {
		if (i % 2 == 1) {
			count++;
		}
	}
	cout << "Number of odd numbers bteween 1 to 100: " << count << endl;
}


int main() {

	/*thread greet_thread(greet);

	thread sum_thread(sum);

	thread even_thread(evenNums);*/

	/*greet_thread.join();
	sum_thread.join();
	even_thread.join();*/

	cout << "Hello from main" << endl;

	cout << endl;

	/*thread count_odds(countOdds, 100);

	count_odds.join();*/

	cout << endl;

	//cout << "Now in main, all threads are finished" << endl;

	//atomics();

	Future();

	return 0;
}