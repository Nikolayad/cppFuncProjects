#include <iostream>
using namespace std;

int main()
{

	float num1,num2;
	char opiration;
	cout << "Enter the first number sign and the second number:  ";
	cin >> num1 >> opiration >> num2;
	switch (opiration)
	{
	case '+' :
		cout << num1 << '+' << num2 << '=' << (num1 + num2);
		break;
	case '-':
		cout << num1 << '-' << num2 << '=' << (num1 - num2);
		break;
	case '*':
		cout << num1 << '*' << num2 << '=' << (num1 * num2);
		break;
	case '/':
		cout << num1 << '/' << num2 << '=' << (num1 / num2);
		cout << "division by zero";
		break;
	default:
		cout << "incorrect operation";
	}
	

}


