#include <iostream>
using namespace std;

void print(int[], int);
void zeroOutArray(int[], int);
void printIt(int);
void changeIt(int&, int);

int main()
{
	const int MAX = 4;
	int a[MAX] = { 8, 6, 7, 5};
	
	int x = 9;
	
	changeIt(a[2], 3);
	printIt(a[2]);
	printIt(77);
	printIt(a[2]);
	print(a, MAX);
	zeroOutArray(a, MAX);
	print(a, MAX);
	getchar();
}

void print(int arr[], int size)
{
	for(int i=0; i < size; i++)
		cout << arr[i] << " ";
	
	cout << endl;
}

void zeroOutArray(int cat[], int size)
{
	for(int i=0; i < size; i++)
		cat[i] = 0;

	cout << endl;
}

void printIt(int i)
{
	cout << i << endl;
}

void changeIt(int &a, int b)
{
	a = b;
}
