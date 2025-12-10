#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<thread>

using namespace std;

void task1() {
	cout << "Task 1..." << endl;
}

void task2() {
	cout << "Task 2..." << endl;
}

int main() {
	thread t1(task1);
	thread t2(task2);

	//std::boolalpha;
	cout <<"t1 joinable ? "<< t1.joinable() << endl;
	cout <<"t2 joinable ? "<< t2.joinable() << endl;


	if (t1.joinable()) {
		t1.join();
	}
	if (t2.joinable()) {
		t2.join();
	}

	cout << "\nAfter joining: " << endl;
	cout << "t1 joinable ? " << t1.joinable() << endl;
	cout << "t2 joinable ? " << t2.joinable() << endl;

	return 0;

}
