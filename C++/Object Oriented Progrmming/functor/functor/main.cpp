#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>

using namespace std;

class Percentage {
	int totalMark;
public:
	Percentage(int totalMark) {
		this->totalMark = totalMark;
	}

	void operator()(int obtainedMark, string name) {
		double percent = (static_cast<double>(obtainedMark) * 100) / totalMark;

		cout <<name <<": "<< percent << "%" << endl;
	}
};

int main() {
	Percentage testMark(60);

	testMark(30, "Abul");
	testMark(45, "Kabul");
	testMark(53, "Babul");

	return 0;
}