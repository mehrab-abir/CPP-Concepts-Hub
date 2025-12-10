#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<thread>
#include<future>

using namespace std;

//receive the reference of your 'promise' object and call set_value() to set the final result in the future object that will be returned by the promise
void getInfo(string name, promise<string>&infoPromise) {
	string info = "This is some data of " + name;

	infoPromise.set_value(info);
}

int main() {

	string name;
	cout << "Enter the name: ";
	getline(cin, name);

	//declare a promise
	promise<string>infoPromise;
	
	//set it up to return a future object and store the future object in 'infoFuture'
	future<string>infoFuture = infoPromise.get_future();

	//pass your function to a thread along with the reference of the promise, pass argument using a comma..maintain the order of arguments
	thread infoThread(getInfo,name, ref(infoPromise));

	//get the final data from the future object by calling the get() method of 'future' object
	string info = infoFuture.get(); //call .get() whene the data is needed

	infoThread.join(); //must join the thread before main() ends

	cout << info << endl;

	return 0;
}


//async is the shorter version of promise, no need to use thread. It also returns a future object, just like 'promise' returns one, and access the data using futureObject.get()