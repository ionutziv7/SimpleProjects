#include <iostream>
using namespace std;

int main()
{
    int n;
    //Get a number n from the keyboard
    cout <<"Enter a number and press ENTER: ";
    cin >> n;
    
    if(n % 2 == 0)
        cout <<"The number is even.";
    else
        cout <<"The number is odd.";

	return 0;
}
