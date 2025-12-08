#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<functional>
#include<string>

#include "practice.h";

using namespace std;

void practice() {

	vector<int>arr = { 5,3,7,6, };

	//vector of reference wrapper
	vector<reference_wrapper<int>>arrRefs(arr.begin(), arr.end());

	//updating values using reference wrapper
	/*for (auto& r : arr) {
		r = r * r;
	}*/

	//the above for loop is same as the one below
	//updating values using reference wrapper
	for (auto& r : arrRefs) {
		r.get() = r.get() * r.get(); //square
	}

	/*for (auto& r : arr) {
		cout << r << " ";
	}*/

	//the above for loop can also be written like the one below
	//to print the values, r.get() is not required

	for (auto& r : arrRefs) {
		cout << r << " ";
	}
	cout << endl << endl;


	//wrap the references of two independent variables
	string player = "Trent";
	int jersyNum = 12;

	//wrapping the references individually
	reference_wrapper<string> playerRefs = ref(player);
	reference_wrapper<int>jersyRef = ref(jersyNum);

	cout << playerRefs.get() << "-> Jersy number : " << jersyRef.get() << endl;

	cout << endl;
	//another example
	string club = "Real Madrid";
	string coach = "Xabi Alonso";

	//wrapping the references of multiple independent variables of same type in a vector
	vector<reference_wrapper<string>>clubRefs = { ref(club),ref(coach) };

	//before updating values
	for (auto& clubInfo : clubRefs) {
		cout << clubInfo.get() << endl;
	}
	cout << endl;

	//updating values through references
	clubRefs[1].get() = "Carlo Ancelotti";

	//after updating a value through reference
	cout << "After updating coach through reference:" << endl;
	for (auto& ref : clubRefs) {
		cout << ref.get() << "___";
	}

	cout << endl;
}