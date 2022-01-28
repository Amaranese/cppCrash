# C++ Refresher

![](https://engineering.fb.com/wp-content/uploads/2015/06/1522635669452_11.jpg)

# Quick Tips 
   
- Return type for functions probably best to be `void` as it doesn't expect a return type.

## INCLUDE, REFERENCING 

- `#include "../log.h"`  // (Best use for everything) Relative to current file
- `#include <log.h>`     // ()Does not need to be relative

  
if you include:   

`using  namespace std;`
    
then you don't need to do things like `std::cout` just `cout`    
  
- If your function is below `main` or in another folder you should specify it in the include section i.e. 
 
```cpp
#include <string>
using namespace std;
int addNumbers(int num1, int num2);

```
  
Alternatively you can include header files :     
- Add the function declaration (just function header no body in the .h file  
- Reference the .h file in your code i.e `#include log.h`   
- Ensure `#pragma once` is included as  it will fail to compile where duplicate lines exist especially with structs etc  
- Alternatively in your logfile, you can check if something has been defined already   
```cpp
#ifndef _LOG_H
#define _LOG_H  

void initLog();


#endif
```


   
# Quick functions
 

## String functions 

`string mystring = "Adam";`     
`mystring.len()`  
`mystring.find("d",0);`  
`mystring.substr(1,3);`    

## GET INPUT VS STRING INPUT
  
```cpp

cin >> age 
cout << age ;

// get string input 
getline(cin,name);
cout << "hello " << name;

```
## Console out 
```cpp
cout << "My name is " << characterName << endl;
```

# NOTES






# VECTOR 


A dynamic array you don't need to populate up front.  

```cpp

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



```


# ARRAYS 

```cpp
int mynumbers[]  = {4,5,6,7};


// empty array 

int mynumbers[20];
```

## Add number 

```cpp
mynumbers[4] = 8;
```

# Threading  


**PROS**

- Fast to start 
- Shares mem
- Unlike multiprocessing, all bloat isn't needed to prevent them stepping on each others toes 
- Low overhead

**CONS**
  
- Difficult to implement
- Can't run on distributed system   

 

```cpp
#include <thread>
#include <iostream>
using namespace std;


// FUNCTION WE WISH TO THREAD 

void function_1(){

	std::cout << " a random print statement" << std::endl;
}

int main(){
	std::thread t1(function_1); // t1 starts running
	

	// DEPENDENT 


	t1.join(); // main thread waits for t1 to finish

	// DEAOMON PROCESS 
	// DETACH means it runs freely (main wont wait)
	// If you ran this, it wouldn't print beause main finishes first
	t1.detach(); 

	return 0;
}

```


# POINTERS 

```cpp

#include <iostream>
#include <string>
using namespace std;

/// -----------------USING POINTERS 
int main(){

	int num = 10;
	cout << &num << endl; // get address 

	int *pNum = &num;  // reference Pointer = address of num var

	cout << pNum  << endl; // Prins out the saved pointer 
	cout << *pNum << endl; // Actually prints out the physical pointed value 

	return 0;


	// POINTER IS JUST A VARIABLE THAT ALLOWS YOU TO STORE AN ADDRESS 


}


```



### functions 

```cpp 

// DECLARE THREAD 
std::thread t1(function_1);

// JOIN
t1.join();
  
// DETACH
t1.detach();


// Check detached
if (t1.joinable())
	t1.join();

```




### NOTES 

COMPARING PRIMATIVES  

#### mutual exclusion lock  
  
The most efficient mechanism in both memory use and execution time. The basic use of a mutual exclusion lock is to serialize access to a resource.

#### condition variable  

The basic use of a condition variable is to block on a change of state; that is it provides a thread wait facility. Remember that a mutex lock must be acquired before blocking on a condition variable and must be unlocked after returning from pthread_cond_wait(). The mutex lock must also be held across the change of state that occurs before the corresponding call to pthread_cond_signal().

#### Sephamore 

The semaphore uses more memory than the condition variable. It is easier to use in some circumstances because a semaphore variable functions on state rather than on control. Unlike a lock, a semaphore does not have an owner. Any thread can increment a semaphore that has blocked.    

#### Read-Write lock   

The read-write lock permits concurrent reads and exclusive writes to a protected resource. The read-write lock is a single entity that can be locked in read or write mode. To modify a resource, a thread must first acquire the exclusive write lock. An exclusive write lock is not permitted until all read locks have been released.


  
# BASICS 

## Mac

### Compile 

`make myprogram.cpp`

### run 

`./myprogram.cpp`


## Class definition

![](https://media.geeksforgeeks.org/wp-content/cdn-uploads/Classes-and-Objects-in-C.png)

## Declaration 

```cpp
    string characterName = "Adam";
    int characterAge = 35;
```


## Print 

```cpp
cout << "My name is " << characterName << endl;
cout << "My name is " << characterName << "\n";


```

## Strings

```cpp

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

```
**Functions** 
`string mystring = "Adam";`     
`mystring.len()`  
`mystring.find("d",0);`  
`mystring.substr(1,3);`  





## Variables 

```cpp 


string name    = "Mike";
char testGrade = 'A';


// Numbers 

int age = 20;   //  16 bit signed 
short age = 10; // 16 bit at least signed 
long age = 44; // at least 32 bit  signed 
long long age 40; // at least 64 bit signed



bool isHungry;    // true/false 
isTall = true;

```

## Casting 

```cpp 

int volume = 10.2; // double 

cout << (int)volume 


	
