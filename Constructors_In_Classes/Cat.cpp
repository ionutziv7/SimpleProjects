#include <iostream>
#include <string>
#include "Cat.h"
Cat::Cat(string _name, int _age)
{
	name = _name;
	age = _age;
	n = 5;
}
Cat::Cat()
{
	age = 0;
	name = "Unnamed";
	n = 0;
}
int Cat::GetAge()
{
	return age;
}
string Cat::GetName()
{
	return name;
}
void Cat::Meow()
{
	cout << "Meow" << endl;
}
void Cat::Introduce()
{
	Meow();
	cout << "My name is: " + name + " and I'm " << age << " years old! " << endl;
}