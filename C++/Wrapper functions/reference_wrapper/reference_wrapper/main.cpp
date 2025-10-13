#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<functional>
#include<algorithm>

#include "practice.h"

using namespace std;

int main() {

	int a = 10, b = 20, c = 30;

	//vector of reference wrapper
	vector < reference_wrapper<int>>refs = { ref(a),ref(b),ref(c) };

	//changing the values
	for (auto& ref : refs) {
		ref.get() = ref.get() * ref.get(); //square,,ref.get() to access value
	}

	//original values have been changed through reference
	cout << "a = " << a << "\n" << "b = " << b << "\n" << "c = " << c << "\n";

	cout << endl;

	vector<int>nums = { 5,4,6,2,8,10 };

	//reference wrapper

	/*
	This is great when :
		- You want to store references in containers(like vectors).
		- You want to modify external variables indirectly
	*/
	
	vector<reference_wrapper<int>>references(nums.begin(), nums.end());

	//for (auto& r : nums) {
	//	r = r * r * r; //cube
	//}

	//Or
	for (auto& r : references) {
		r.get() = r.get() * r.get() * r.get(); //accessing values
	}

	for (auto& r : nums) {
		cout << r << " ";
	}
	cout << endl;
	cout << endl;


	//swapping values
	int num1 = 10, num2 = 20;

	vector<reference_wrapper<int>>num_refs = { ref(num1),ref(num2) };

	//swapping the values of num1 and num2
	int temp = num_refs[0].get();
	num_refs[0].get() = num_refs[1].get();
	num_refs[1].get() = temp;

	cout << "After swapping:\n";
	cout << "num1 = " << num1 << "\n" << "num2 = " << num2 << endl;

	cout << endl;

	practice();

	return 0;
}
