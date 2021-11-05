// Question 2.Write a C++ Program to make a Simple Calculator to Add, Subtract, Multiply or Divide Using switch...case

#include <iostream>
using namespace std;
int main() {
	
	char op;
	
	cout << "Emter Arithmetic Operator " << '\n';
	 
	cin >> op;

	float value1, value2 ;

	cout << "Enter First Value " << '\n';

	cin >> value1;

	cout << "Enter Second Value " << '\n';

	cin >> value2;

	switch(op) {
	case '+':


		cout << value1 << "+" << value2 << "=" << value1 + value2 << '\n';
		break;
		 
	case '-':

		cout << value1 << "-" << value2 << "=" << value1-value2 << '\n';
		
		break;

	case'*':

		cout << value1 << "*" << value2 << "=" << value1*value2 << '\n';

		break;

	case '/':

		cout << value1 << "/" << value2 << "=" << value1/value2 << '\n';

		break;

	default:

		cout << "Invalid Value";
	}
	return 0;
}
