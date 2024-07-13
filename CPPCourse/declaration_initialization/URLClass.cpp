#include<iostream>

using namespace std;

class URLClass{
	const char* protocol;
	const char* resource;
	public:
		URLClass(char* protocol, char* resource){
			this->protocol = protocol;
			this->resource = resource;
		}

		void getLink(){
			cout << this->protocol << "://" << this->resource << endl;
		}
};

int main() {
	URLClass* l = new URLClass((char*)"http", (char*)"www.google.com");
	l->getLink();
	return 0;
}