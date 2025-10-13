#define _CRT_SUCURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Box {
	int volume;

public:
	Box(int volume) {
		this->volume = volume;
	}

	Box operator*(Box& b) {
		Box box = volume * b.volume;
		return box;
	}

	void displayVolume() {
		cout <<"Box volume : " << volume << endl;
	}
};

int main() {
	Box box1(10), box2(20);

	Box box3 = box1 * box2;
	box3.displayVolume();


	return 0;
}