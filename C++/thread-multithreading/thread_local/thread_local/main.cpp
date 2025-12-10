#include<iostream>
#include<thread>
#include<string>

thread_local int x = 1;

using namespace std;

void task(const string& t) {
	x = x + 10;
	cout << "Value -> " << t<<" : " << x << endl;
}

int main() {
	thread t1(task, "t1");
	thread t2(task, "t2");

	t1.join();
	t2.join();

	return 0;
}