#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, i, is_prime = true;
    
    cout << "Enter a number and press ENTER: ";
    cin >> n;
    
    //Test for prime by checking for divizibility 
    //by all whole numbers form 2 to sqrt(n).
    
    i = 2;
    while(i <= sqrt(n)) {   
        if(n % i == 0) {  //if i divides n, n is not prime
            is_prime = false;
            break;
        }
        i++;
    }
    //Print results
    if(is_prime)
        cout<<"Number is prime."<<endl;
    else
        cout <<"Number is not prime." << endl;
    system("PAUSE");
	return 0;
}
