#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>

using namespace std;

template<typename T>
T add(T a, T b) {
	return a + b;
}


//class template
template<typename T1, typename T2>
class Pair {
	T1 first;
	T2 second;

public:
	Pair(T1 a, T2 b) {
		first = a;
		second = b;
	}

	void show() {
		cout << "First : " << first << ", Second: " << second << endl;
	}
};

int main() {
	cout << "INT: "<<add(5, 6) << endl;
	cout << "Double: " << add(2.5, 3.1) << endl;

	Pair<int, string>p(5, "Hello");
	p.show();

	return 0;
}