#include <iostream>
#include <string>

using namespace std;

int main(){

	// S T R I N G S 

	string greeting = "hello";

	cout << greeting.length();
	cout << greeting[0];
	cout << greeting.find("llo") << endl;
	cout << greeting.substr(2) << endl;
	cout << greeting.substr(1,3) << endl; 
	

	return 0;

}