#include <iostream>
using namespace std;

int main()
{
	double a, b, c;
	char z;
	double procent;

	cout « "First number : ";
	cin » a;
	cout « "Second number: ";
	cin » b;
	cout « "Choose an action (+, -, * or /): ";
	cin » z;
	switch (z)
	{
	case '+':
		cout << MySum(a,b) <<endl;
		break;

	case '-':
		cout << MySub(a, b) << endl;
		break;

	case "*":
		cout « " * in progress";
		break;

	case '/':
		cout « " / in progress";
		break;


	default: cout « "Wrong action";;
	}

	return 0;

}