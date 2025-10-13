#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

int main() {

	int* nums = new int[5]; //dynamic memory allocation

	//input for nums array
	cout << "Input for nums array: " << endl;
	for (int i = 0; i < 5; i++) {
		cout << "Number " << i + 1 << ": ";
		cin >> nums[i];
	}
	
	//display nums array
	cout << "Nums array: ";
	for (int i = 0; i < 5; i++) {
		cout << nums[i] << " "; 
	}

	cout << endl;

	//increasing size of the nums array by taking a new array
	int* moreNums = new int[10];

	//copying all values into new array
	for (int i = 0; i < 5; i++) {
		moreNums[i] = nums[i];
	}

	//taking input for the rest of the moreNums array
	cout << "Input for newly allocated memory of numsArray- moreNums: " << endl;
	for (int i = 5; i < 10; i++) {
		cout << "Number " << i + 1 << ": ";
		cin >> moreNums[i];
	}

	//printing new moreNums array
	cout << "\nmoreNums array: ";
	for (int i = 0; i < 10; i++) {
		cout << moreNums[i] << " ";
	}


	delete[] nums; //deleteing nums array

	return 0;
}
