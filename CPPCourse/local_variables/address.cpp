#include <iostream>

using namespace std;

void func(int *y) {           // y will be a pointer to the caller's variable x
	cout << "Address of y is " << y << endl;
    *y = 1;
}

int main() {
	int x = 2;
	int* z = &x;
	int& a = x;
	a=3;
	cout<<*z<<endl;
	cout<<&a<<endl;
	cout << "Address of x is " << &x << endl;
	func(&x);                          // x will now have the value 1
	cout << "After calling func(), x = " << x << endl;
}