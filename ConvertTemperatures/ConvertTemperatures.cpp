#include <iostream>
using namespace std;

int main()
{
    double ctemp;   //Celsius temperature
    
    //Prompt and input value of ctemp.
    
    cout <<"Input a Celsius temp and press ENTER: ";
    cin >> ctemp;
    
    //Convert ctemp and output results.

    cout << "Fahrenheit temp is: " << (ctemp * 1.8) + 32;
    cout << endl;
    
    system("PAUSE");
	return 0;
}
