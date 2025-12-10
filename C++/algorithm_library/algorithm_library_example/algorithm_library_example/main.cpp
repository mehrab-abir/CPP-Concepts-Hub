#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<list>
#include<vector>
#include<string>
#include<numeric>
#include<algorithm>

using namespace std;

enum class roastType {
	light, medium, dark
};

struct Coffee {
	string name;
	roastType roast;
	string flavourProfile;
	double pricePerKg;
};

list<Coffee> createSubscription(vector<Coffee>stock) {
	auto twoFlavourCoffees = count_if(stock.begin(), stock.end(), [](const Coffee c) {return c.flavourProfile == "Creamy" || c.flavourProfile == "Full Bodied"; });
	cout << "Number of coffees with flavor profile Creamy or Full Bodied" << twoFlavourCoffees << endl;

	sort(stock.begin(), stock.end(), [](const Coffee& cur, const Coffee& next) {return cur.roast < next.roast; });

	list<Coffee>ret;
	for_each(stock.begin(), stock.end(), [&](const Coffee& c) {
		if ((c.roast == roastType::light || c.roast == roastType::medium) && c.pricePerKg < 10) {
			ret.push_back(c);
		}
		});

	auto darkRoast = find_if(stock.begin(), stock.end(), [](const Coffee c) {return c.roast == roastType::dark; });

	double sum = accumulate(stock.begin(), stock.end(), 0.0, [](double& sum, const Coffee c) {return sum += c.pricePerKg; });
}

int main() {
	

	return 0;
}