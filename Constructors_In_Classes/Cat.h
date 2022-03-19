#include <iostream>
#include <string>
using namespace std;
class Cat
{
private:
	int n;
	int age;
	string name;
	void Meow();
public:
	Cat(string _name, int _age);
	Cat();
	int GetAge();
	string GetName();
	void Introduce();
	int GetN() { return n; }
};