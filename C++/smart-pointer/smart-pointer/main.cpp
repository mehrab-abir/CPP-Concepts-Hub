#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include <memory> //for smart pointer
#include<thread>

using namespace std;

void sharedPtrExample() {

    shared_ptr<int> sp1 = make_shared<int>(20);
    cout << "sp1 use count: " << sp1.use_count() <<endl; //1,, so far only sp1 points 20
    cout << "sp1 value: " << *sp1 << endl;

    cout << endl;

    shared_ptr<int> sp2 = sp1;  // shared ownership
    cout << "sp2 use count: " << sp2.use_count() << endl; 
    //2, because now, sp1 and sp2 point 20, so use_count is 2

    cout << "sp2 value: " << *sp2 << endl;
    cout << "sp2 use count: " << sp2.use_count() << endl; //still 2, no new pointer has ownership yet
    cout << "sp1 use count after sharing: " << sp1.use_count() <<endl; 
    //2, sp1 and sp2 point 20, that's why use_count 2

    cout << endl;

    shared_ptr<int>sp3 = sp1; //new ownership of 20, use_count increased to 3

    cout << "After shared_ptr<int>sp3 = sp1; ->" << endl;
    cout << "sp1 use count: " <<sp1.use_count()<< endl; //3
    cout << "sp2 use count: " <<sp2.use_count()<< endl; //3
    cout << "sp3 use count: " <<sp3.use_count()<< endl; //3

    //now, sp1, sp2, and sp3, total 3 pointers point to 20, so use_count of all of them is 3

    //use_count() returns the number of shared_ptrs that are pointing to the same resource.
}

int main() {
    //unique pointer
    unique_ptr<int>ptr = make_unique<int>(20);

    cout << "Value of ptr: " << *ptr << endl;
    cout << "Address of ptr: " << ptr << endl;

    cout << endl;

    //shared pointer
    shared_ptr<int>s_ptr1 = make_shared<int>(15);
    shared_ptr<int>s_ptr2 = s_ptr1; //both s_ptr1 and s_ptr2 share same memory

    cout << "Address of s_ptr1: " << s_ptr1 << endl;
    cout << "Address of s_ptr2: " << s_ptr2 << endl;

    if (s_ptr1 == s_ptr2) {
        cout << "Same address." << endl;
    }
    else {
        cout << "Different Address" << endl;
    }

    cout << endl;

    cout << "Value of s_ptr1: " << *s_ptr1 << endl; //15
    cout << "Value of s_ptr2: " << *s_ptr2 << endl; //15

    cout << endl;

    sharedPtrExample();

    /*int cores = thread::hardware_concurrency();
    cout << "Your CPU supports " << cores << " concurrent threads.\n";*/

    cout << endl;

	return 0;
}
