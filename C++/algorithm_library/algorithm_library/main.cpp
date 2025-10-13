#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	//queries
	vector<int>nums = { 2,3,8,1,5,7,6,2 };

	int n_2 = count(nums.begin(), nums.end(), 2);

	cout << "2 appears " << n_2 << " times" << endl;

	
	int n = nums.size();
	
	int n_evens = count_if(nums.begin(),nums.end(), [](int i) {return i % 2 == 0;});

	cout << "Number of even numbers in the array: " << n_evens << endl;

	cout << "\n";
	//modifier
	vector<int>copyArr(n);

	copy(nums.begin(), nums.end(), copyArr.begin());

	cout << "CopyArr:";
	for (auto x : copyArr) {
		cout << x << " ";
	}

	cout << endl;
	cout << endl;

	vector<int>odds(n);

	copy_if(nums.begin(), nums.end(), odds.begin(), [](int i) {return i % 2 == 1; });

	cout << "Odd numbers: ";
	for (int odd : odds) {
		cout << odd << " ";
	}
	cout << endl;
	cout << endl;


	//transform
	vector<int>squares(n);
	
	transform(nums.begin(), nums.end(), squares.begin(), [](int i) {return i * i; });

	cout << "Squares of the items of nums array: ";
	for (auto i : squares) {
		cout << i << " ";
	}
	cout << endl;
	cout << endl;
	
	//manipulators

	//sort 'nums' array in ascending order
	sort(nums.begin(), nums.end());

	cout << "Ascending order: ";
	for (auto x : nums) {
		cout << x << " ";
	}
	cout << endl;

	//sort 'nums' array in descending order
	sort(nums.begin(), nums.end(), greater<int>());

	cout << "Descending order: ";
	for (auto x : nums) {
		cout << x << " ";
	}
	cout << endl << endl;

	int arr[5] = { 2,6,3,4,8, };

	sort(arr, arr + 5, greater<int>());

	cout << "arr[] in descending order: ";
	for (int x : arr) {
		cout << x << " ";
	}
	cout << endl;

	return 0;
}