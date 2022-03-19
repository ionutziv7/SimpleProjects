#include <iostream>
#include "Cat.h"
using namespace std;
int main()
{
	Cat bebita("Bebita", 5);
	Cat caloro("Caloro", 1);
	Cat catC;
	bebita.Introduce();
	caloro.Introduce();
	cout << caloro.GetN() << endl;
	system("pause");
	return 0;
}