#include <iostream>
#include <string>
using namespace std;
int main() {
	std::string name;
	float a;
	int b;
	cout << "Hi, user. What is your name?" << endl;
	cin >> name;
	/*
	Logical operators:
	== (equal)
	> (less than)
	< (more than)
	<=(more than or equal to)
	>= (less than or equal to)
	|| (logical or)
	&& (logical and)
	*/
	if (/*boolean-expression*/ name == "Luke") {
		cout << "Hello, Luke.";
		cout << endl << "Luke, you may not use this calculator." << endl;
	} 
	
	else {
		cout << "Hi, " << name << endl;
		cout << "Type one number in." << endl;
		cin >> a;
		/*
		Tell type conversion: var-type(var-name)
		Forced type conversion: int a = float b (like that)
		*/
	}
	return 0;
}