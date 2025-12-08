#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

void calculateTax(int income) {
	int limit = 15000;
	int a = 10;

	//function inside another function, for short time, for a tiny piece of logic -> lambda function
	/*
	Inside the square bracket, 
		using [=] -> captures all local variables by value
		using [&] -> captures all local variables by reference
		using any specific local variable, -> captures that variable by value
		using any specific local variable with &, -> captures that variable by reference
		[=, &x] → Capture all by value, except x by reference
		[&, x] → Capture all by reference, except x by value
	*/
	auto isTaxAble = [limit](int current_income) {
		return current_income > limit;
		};

	if (isTaxAble(income)) {
		double netIncome;
	
		netIncome = income - (income * 0.1);
		cout << "Net income: " << netIncome << endl;
	}
	else {
		cout << "Income is not taxable" << endl;
	}
}

void suggestMovie(string ans) {

	auto decision = [](string ans) {
		if (ans == "yes" || ans == "Yes") {
			return true;
		}
		else {
			return false;
		}
	};

	if (decision(ans)) {
		cout << "Let me suggest you some movies.....\n\n";
	}
	else {
		return;
	}

	string genre1 = "Drama";
	string genre2 = "others";

	auto getGenre = [=](string genre) {
		if (genre == genre1) {
			return true;
		}
		else {
			return false;
		}
	};

	string genre;
	cout << "What is your favourite genre: ";
	cin >> genre;

	if (getGenre(genre)) {
		cout << "You may watch: \n";
		cout << "The Green Mile (1999)" << endl;
		cout << "The Bucket List (2007)" << endl;
		cout << "12 Angry Men (1957)" << endl;
		cout << "The Shawshank Redemption (1993)" << endl;
	}
	else {
		cout << "You may watch: \n";
		cout << "The Avatar (2009)" << endl;
		cout << "Titanic (1997)" << endl;
		cout << "12 Angry Men (1957)" << endl;
		cout << "Top Gun (1986)" << endl;
	}
	cout << endl;
}

int main() {

	//basic
	auto greet = []() {
		cout << "Hello" << endl;
	};
	greet();

	//with parameteres
	auto add = [](int a, int b) {
		return a + b;
		};

	cout << add(3, 4) << endl;

	cout << endl;

	//capture by value and by reference

	int x = 10;
	auto by_val = [x]() { std::cout << x << '\n'; }; // captured a copy
	auto by_ref = [&x]() { std::cout << x << '\n'; }; // references original

	//before x = 20
	cout << "Before x=20: " << endl;
	by_val(); //10
	by_ref(); //10

	cout << "After x=20: " << endl;
	x = 20;
	by_val(); // 10
	by_ref(); // 20

	cout << endl;

	//sorting
	vector<int>nums = { 5,1,9,3,7,10,6,3,4 };

	cout << "Sorted in ascending order: ";
	sort(nums.begin(), nums.end()); //ascending order

	for (int i : nums) {
		cout << i << " "; 
	}
	cout << endl;

	//descending
	sort(nums.begin(), nums.end(), [](int a, int b) {
		return a > b; //descending order, used lambda inside
		}); 

	cout << "Sorted in descending order: ";
	for (int i : nums) {
		cout << i << " ";
	}
	cout << endl;

	greet(); //called again, as it has a name

	//anonymas
	[]() {
		cout << "This is an anonymas lambda function, called immediately" << endl;
		}();

	//inside another function --very useful when a piece of logic is needed only for one function
	cout << "\nLambda function inside another function:" << endl;

	int income;

	cout << "Enter income: ";
	cin >> income;

	calculateTax(income);

	cout << "*****************************\n";

	string ans;
	cout << "Do you watch movie(yes/no): ";
	cin >> ans;

	suggestMovie(ans);

	return 0;
}