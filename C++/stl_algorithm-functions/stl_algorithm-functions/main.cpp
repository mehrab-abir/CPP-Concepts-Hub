#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> // for inner_product, reduce
#include <iterator> // for back_inserter

using namespace std;

int main() {

	vector<int> v = { 1, 2, 3, 4, 5, 6 };
	vector<int> v2 = { 1, 2, 3, 4, 5, 6 };
	vector<int> result(v.size());

	//cout << all_of(v.begin(), v.end(), [](int x) { return x > 0; }) << endl;
	//checks whether every element satisfies the condition

	//cout << any_of(v.begin(), v.end(), [](int x) { return x > 5; }) << endl;
	//checks whether at least one element satisfies the condition

	/*copy(v.begin(), v.end(), result.begin());

	for (int x : result) {
		cout << x << " ";
	}*/

	/*fill(v.begin(), v.begin() + 3, 9);

	for (int x : v) {
		cout << x << " ";
	}*/

	//cout<<inner_product(v.begin(), v.end(), v2.begin(), 0)<<endl;
	/*
		sum of element-wise products
		(1×1)+(2×2)+(3×3)+(4×4)+(5×5)+(6×6)
	*/

	/*remove(v.begin(), v.end(), 3);

	for (int x : v) {
		cout << x << " ";
	}*/



	//vector<int> no3(v.size());
	//remove_copy(v.begin(), v.end(), no3.begin(),3 ); //3 will not be in the new array,,but original array remains unchanged
	///*
	//copies elements from one range to another while skipping the elements that match
	//a given value.
	//*/

	//for (int x : no3) {
	//	cout << x << " ";
	//}

	//vector<int> noEven(v.size());

	////copies all to a different array except those who matches the given condition
	//remove_copy_if(v.begin(), v.end(), noEven.begin(), [](int x) {return x % 2 == 0; });

	//for (int x : noEven) {
	//	cout << x << " ";
	//}

	vector<int> rcp(v.size());
	replace_copy(v.begin(), v.end(), rcp.begin(), 4, 40); //4 will be replaced by 40


	for (int x : rcp) {
		cout << x << " ";
	}
	cout << endl;

	cout << "Original array v: ";  //unchanged
	for (int x : v) {
		cout << x << " ";
	}

	cout << endl;

	return 0;
}