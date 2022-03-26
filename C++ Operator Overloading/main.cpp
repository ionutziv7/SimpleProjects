#include <iostream>
using namespace std;

class Foo
{
	int a[5];
	public:
	int& operator[] (int);
};

int&Foo::operator[](int j)
{
	return a[j];
}

int main()
{
	Foo f;
	
	for(int i=0; i<5;i++)
		f[i] = i;
	
	for(int i=0; i<5;i++)
		cout << f[i] << endl;
	
	//to execute from terminal : g++ main.cpp -o main 
	// ./main
	getchar();
}
