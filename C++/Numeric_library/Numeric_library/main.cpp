#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<numeric>

using namespace std;

int main() {
	vector<int>nums = { 2,3,4,6,5 };

	int sum = accumulate(nums.begin(), nums.end(), 0);

	cout << "Summation of the numbers: "<<sum << endl;

	int product = accumulate(nums.begin(), nums.end(), 1, [](int a, int b) {return a * b; });

	cout << "Product of the numbers: " << product<<endl;

	return 0;
}