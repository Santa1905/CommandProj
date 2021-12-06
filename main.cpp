#include <iostream>
#include "funcs.h"

using namespace std;

int main()

{
	double a, b, c;
	char znak;

	cout << "First number: ";
	cin >> a;

	cout << "Second number: ";
	cin >> b;

	cout << "Choose action ( +, -, * or / ): ";
	cin >> znak;

	switch (znak)
	{
	case '+':
		cout << MySum(a, b) << endl;
		break;

	case '-':
		cout << MySub(a, b) << endl;
		break;

	case '*':
		cout << MyMul(a, b) << endl;
		break;

	case '/':
		if (b == 0) {
			cout << "You cannot divided by 0" << endl;
		}
		else
			cout << MyDiv(a, b) << endl;

		break;


	default: cout << "Wrong action";


	}
	return 0;

}