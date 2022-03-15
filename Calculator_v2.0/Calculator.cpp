#include "Calculator.h"
#include <iostream>
using namespace std;

void Calculator::Display()
{
	system("cls");
	int menu = 1;
	while (menu != 2)
	{
		cout << "Choose an operation to be performed: " << endl;
		cout << "1. Addition" << endl;
		cout << "2. Substraction" << endl;
		cout << "3. Multiplication" << endl;
		cout << "4. Division" << endl;
		cout << "5. Division without remainder" << endl;
		cout << "6. Modulo" << endl;
		cout << "7. Pow" << endl;
		cout << "8. Sqrt" << endl;
		cout << "9.Exit the application" << endl << endl;
		
		try
		{
			double dchoice = 0.0;
			//cin >> dchoice;
			int ch = (int)dchoice;
			cin >> ch;
			switch (ch)
			{
			case 1:
				Addition();
				break;
			case 2:
				Substraction();
				break;
			case 3:
				Multiplication();
				break;
			case 4:
				Division();
				break;
			case 5:
				DivisionWithoutRemainder();
				break;
			case 6:
				Modulo();
				break;
			case 7:
				Pow();
				break;
			case 8:
				Sqrt();
				break;
			case 9:
				menu = 2;
				break;
			default:
				cout << "Invalid input! Please enter a number between 1 and 7!" << endl;
				break;
			}
			if (ch == 0 || ch < 0 )
				throw "Enter valid options!\n";
		}
		catch(const char *msg)
		{
			cerr << msg << endl;
		}
	}
}

void Calculator::Input()
{
	cout << "Enter two numbers: " << endl;
	cin >> number1 >> number2;
}

void Calculator::DoubleInput()
{
	cout << "Enter two numbers: " << endl;
	cin >> dnumber1 >> dnumber2;
}

void Calculator::LongInput()
{
	cout << "Enter two numbers: " << endl;
	cin >> lnumber1 >> lnumber2;
}

void Calculator::Addition()
{
	DoubleInput();
	cout << "Result: " << dnumber1 << " + \n\t" << dnumber2 << endl << "\t\xC4\xC4\xc4" << endl << "\t" << dnumber1 + dnumber2 << endl << endl;
}

void Calculator::Substraction()
{
	DoubleInput();
	cout << "Result: " << dnumber1 << " - \n\t" << dnumber2 << endl << "\t\xC4\xC4\xc4" << endl << "\t" << dnumber1 - dnumber2 << endl << endl;
}

void Calculator::Multiplication()
{
	LongInput();
	cout << "Result: " << lnumber1 << " * \n\t" << lnumber2 << endl << "\t\xC4\xC4\xc4\xC4\xC4\xc4\xC4" << endl << "\t" << lnumber1 * lnumber2 << endl << endl;
}

void Calculator::Division()
{
	try
	{
		DoubleInput();

		if (dnumber1 == 0)
		{
			throw "Division by  zero condition!\n";
		}
		if (dnumber2 == 0)
		{
			throw "Division by zero condition!\n";
		}
		cout << "Result: " << dnumber1 << " / \n\t" << dnumber2 << endl << "\t\xC4\xC4\xc4\xC4\xc4\xC4\xc4" << endl << "\t" << dnumber1 / dnumber2 << endl << endl;
	}
	catch (const char* msg)
	{
		cerr << msg << endl;
	}
}

void Calculator::DivisionWithoutRemainder()
{
	Input();
	cout << "Result: " << number1 << " / \n\t" << number2 << endl << "\t\xC4\xC4\xc4" << endl << "\t" << number1 / number2 << endl << endl;
}

void Calculator::Modulo()
{
	Input();
	cout << "Result: " << number1 << " % \n\t" << number2 << endl << "\t\xC4\xC4\xc4" << endl << "\t" << number1 % number2 << endl << endl;
}

void Calculator::Pow()
{
	DoubleInput();
	cout << "Result: " << dnumber1 << "^\n\t" << dnumber2 << endl << "\t\xC4\xC4\xc4" << endl << "\t" << pow(dnumber1, dnumber2) << endl << endl;
}

void Calculator::Sqrt()
{
	cout << "Enter a number: " << endl;
	cin >> dnumber1;
	cout << "Result: " << dnumber1 << "sqrt\n\t\xC4\xC4\xc4\xC4\xc4\n\t" << sqrt(dnumber1) << endl << endl;
}
