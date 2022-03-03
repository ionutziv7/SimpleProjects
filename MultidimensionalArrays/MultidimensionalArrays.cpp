#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	int matrix[10][10];
	matrix[0][0] = 10;
	matrix[9][9] = 5;

	for (int i = 0; i < 10; i++)
	{
		for (int j =0; j < 10; j++)
		{
			matrix[i][j] = 0;
		}
	}
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

	system("pause");
	return 0;
}
