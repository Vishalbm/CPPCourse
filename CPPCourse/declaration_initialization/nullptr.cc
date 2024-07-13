#include <iostream>

using namespace std;

void func(int i) {
	cout << "func(int) called\n";
}

void func(int *i) {
	cout << "func(int *) called\n";
}

int main() {
	// func(NULL);
	func(nullptr);

	int* i = NULL;
	cout<<i<<endl;
	// int* p = new int;
	int x = 5;
	int arr[x];
	int* p = new int[x];
	cout<< p[0] <<endl; 
}