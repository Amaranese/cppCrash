
#include <iostream>
#include <string>
using namespace std;

/// -----------------USING POINTERS 
int main(){

	int num = 10;
	cout << &num << endl; // get address 

	int *pNum = &num;  // reference Pointer = address of num var


	cout << "The following is the pointer created by doing *pNum = &num : ";
	cout << pNum  << endl; // Prints out the saved pointer 

	cout << "The following is actually referencing the value by doing *pNum: ";
	cout << *pNum << endl; // Actually prints out the physical pointed value 

	return 0;


	// POINTER IS JUST A VARIABLE THAT ALLOWS YOU TO STORE AN ADDRESS 


}