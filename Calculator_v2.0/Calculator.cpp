#include "Calculator.h"
#include <iostream>

void Calculator::Display()
{
	int menu = 1;
	while (menu != 2)
	{
		std::cout << "Choose an operation to be performed: "<<std::endl;
		std::cout << "1. Addition" << std::endl;
		std::cout << "2. Substraction" << std::endl;
		std::cout << "3. Multiplication" << std::endl;
		std::cout << "4. Division" << std::endl;
		std::cout << "5. Modulo" << std::endl;
		std::cout << "6. Pow" << std::endl;
		std::cout << "7. Sqrt" << std::endl;
		std::cout << "8.Exit the application" << std::endl<<std::endl;
		int choice;
		std::cin >> choice;
		switch (choice)
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
			Modulo();
			break;
		case 6:
			Pow();
			break;
		case 7:
			Sqrt();
			break;
		case 8:
			menu = 2;
			break;
		default:
			std::cout << "Invalid input! Please enter a number between 1 and 7!" << std::endl;
			break;
		}
	}
}

void Calculator::Input()
{
	std::cout << "Enter two numbers: " << std::endl;
	std::cin >> number1 >> number2;
}

void Calculator::Addition()
{
	Input();
	std::cout << "Result: " << number1 + number2 << std::endl<<std::endl;
}

void Calculator::Substraction()
{
	Input();
	std::cout << "Result: " << number1 - number2 << std::endl << std::endl;
}

void Calculator::Multiplication()
{
	Input();
	std::cout << "Result: " << number1 * number2 << std::endl << std::endl;
}

void Calculator::Division()
{
	Input();
	std::cout << "Result: " << number1 / number2 << std::endl << std::endl;
	std::cout << std::endl;
	std::cout << "Double version: Enter two numbers: ";
	std::cin >> dnumber1 >> dnumber2;
	std::cout << "Result: " << dnumber1 / dnumber2 << std::endl << std::endl;
}

void Calculator::Modulo()
{
	Input();
	std::cout << "Result: " << number1 % number2 << std::endl << std::endl;
}

void Calculator::Pow()
{
	Input();
	std::cout << "Result: " << pow(number1, number2)<< std::endl << std::endl;
}

void Calculator::Sqrt()
{
	std::cout << "Enter a number: " << std::endl;
	std::cin >> dnumber1;
	std::cout << "Result: " << sqrt(dnumber1) << std::endl << std::endl;
}