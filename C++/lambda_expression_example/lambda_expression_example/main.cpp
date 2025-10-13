#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

void getDiscountAmount(int age) {
	int minAge = 12;

	//captured variable can't be modified, its 'const' by default, use mutable to modify, see next lambda
	auto isFreeOfCharge = [=](int age) {
		return age <= minAge;
	};

	//'mutable' enables modifying captured variable
	auto halfCharge = [=](int age) mutable {
		minAge = minAge + 4;
		return age <= minAge;
	};


	if (isFreeOfCharge(age)) {
		cout << "100% discount for you." << endl;
	}
	else if(halfCharge(age)){
		cout << "50% discount for you." << endl;
	}
	else {
		cout << "No discount for you." << endl;
	}
}

int main() {
	int age;
	cout << "Enter your age: ";
	cin >> age;

	getDiscountAmount(age);

	return 0;
}
