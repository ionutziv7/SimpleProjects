#include <iostream>
using namespace std;

void calculate_factorial( long number, long long factorial);
int main()
{
    long number, factorial = 1;
    cout<<"Enter the number: ";
    cin >> number;
    calculate_factorial( number, factorial);
    
	return 0;
}

void calculate_factorial( long number, long long factorial ) {
    if(number < 0 )
        cout <<"Can't find the factorial for negative number";
    else if(number <=1)
        cout << number << "! = " << factorial;
    else{
        for(int counter = number; counter >=2; counter-- ) {
            factorial = factorial * counter;
        }
         cout << number << "! = " << factorial;
    }
}
