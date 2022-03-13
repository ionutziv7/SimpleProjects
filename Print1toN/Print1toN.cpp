#include <iostream>
using namespace std;

int main()
{
    int i, n;
    //Get  number from the keyboard and initialize i.
    cout <<"Enter a number and press ENTER: ";
    cin >> n;
    i = 1;
    while(i <=n)
    {
        cout << i << " ";
        i = i + 1;
    }
	return 0;
}
