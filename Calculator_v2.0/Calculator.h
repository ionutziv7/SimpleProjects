#include <iostream>

class Calculator
{
public:
	void Display();
	void Input();
	void DoubleInput();
	void LongInput();
	void Addition();
	void Substraction();
	void Multiplication();
	void Division();
	void DivisionWithoutRemainder();
	void Modulo();
	void Sqrt();
	void Pow();
	int number1 = 0, number2 = 0;
	double dnumber1 = 0, dnumber2 = 0;
	long long lnumber1 = 0, lnumber2 = 0;
	Calculator()
	{
		std::cout << "Calculator v2.0" << std::endl;
	}
};
