#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<string>
#include<thread>
#include<atomic>

#include "atomics.h"

using namespace std;

atomic<int>counter(0);
//no need to use mutex here for simple shared variable
//

void increment() {
	for (int i = 0; i < 10000; i++) {
		++counter;
	}
	//cout << this_thread::get_id() << endl;
}

void atomics() {

	thread t1(increment);
	thread t2(increment);

	/*cout << t1.get_id() << endl;
	cout << t2.get_id() << endl;*/

	t1.join();
	t2.join();

	cout << "Counter: " << counter << endl;
}