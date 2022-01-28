#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{

	// VECTOR 

	vector<string> friends;

	friends.push_back("Oscar");
	friends.push_back("Angela");
	friends.push_back("Kevin");
	friends.insert(friends.begin() + 1, "Jim");

	// friends.erase(friends.begin() + 1);	

	cout << friends.at(0) << endl;
	cout << friends.at(1) << endl;
	cout << friends.at(2) << endl;
	cout << friends.size() << endl;

	return 0;


}