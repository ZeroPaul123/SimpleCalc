#include <iostream>
#include <string>
using namespace std;

int calc(int a, int b, int c) {

	switch (c)
	{

	case 1:
		return a + b;
	case 2:
		return a - b;
	case 3:
		return a * b;
	case 4:
		return a / b;
	default:
		break;
	}


}

int main() {
	int num1;
	int num2;
	string operatorrrrrrr;
	cout << "Enter your first number: " << endl;
	cin >> num1;

	cout << "Enter your second number: " << endl;
	cin >> num2;

	cout << "Choose your operator: (+, -, *, /) " << endl;
	cin >> operatorrrrrrr;

	if (operatorrrrrrr == "+") {

		cout << calc(num1, num2, 1);

	}
	else if (operatorrrrrrr == "-")
	{
		cout << calc(num1, num2, 2);
	}
	else if (operatorrrrrrr == "*")
	{
		cout << calc(num1, num2, 3);
	}
	else if (operatorrrrrrr == "/")
	{
		cout << calc(num1, num2, 4);
	}
	else {


		cout << "Not a valid operator";
	}



	cin >> num1;


	return 0;
}