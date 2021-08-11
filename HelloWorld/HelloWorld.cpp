/*
First of all, you will need a .cpp file to program in.
After you complete all that, you can start programming.
Anyway, the first line you will need is #include <iostream> or #include <cstdio> or #include <stdio.h>.
What this does is it 'includes' or 'imports' that specific file thing. And you will be able to use it, such as functions in it and variables.
For <iostream> ,<cstdio> ,<stdio.h> you will definently need a function to write your first program! So, let's get started, shall we viewers?
*/
#include <iostream>
/*
The next line we will be using is using namespace std;. However, this is highly debated upon, so if you take the 1st side of the argument, for all standard library functions,
use std:: in front of your thing in a standard library module. All you have to know for now is that it is a thing to save some typing. (You don't have to type std::) 
*/
using namespace std; // optional
/*
The next line you will need is int main(). What 'int' is: a type (an integer). FOr those of you who don't know what that is, I highly suggest you go review your math
skills, but for programming C++, all you need to know that an 'int' must be a whole number (ex: 4, 5, 6). What main() is: So basically what main() is is it declares that this is the main() 
function. So, all C++ code is run from inside the function(the main process). So, what those parentheses are for is that they accept parameters or arguments for main().
But, we will be using main() in its normal (and commonly used) way. Also, don't forget the brackets. EVER.
*/
int main() {
	/*
	Anyway, the next line of code that you will need is cout with two greater than or lesser than signs (<<). So it is typed like this: cout <<.
	Then use the "" key on your keyboard to type text in it. Then, type hello world or Hello World! (your prefrences). Put a semicolon after liek this: cout << "/*TEXT";
	*/
	// If you chose not to use it:
	std::cout << "Hello World!"; // Prints "Hello World!" the first time.
	// If you did, then:
	cout << "Hello World!"; // Prints "Hello World!" the second time. You are free to delete one of them.
	/*
	So, return part of it means that it will return a value to the console. For standard, 0 is no error and anything other than that will be a non-zero value.
	Because we declared our main() function to only return int, it will only return an int (a whole number). That means you can evern return a variable or data piece (in the next
	video) to it (if it is an int). Never forget the semicolon after return 0.
	*/
	return 0;
}