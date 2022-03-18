#include <iostream>
using namespace std;

//Functions declared before being used.
void print_results(double a, double b);
double avg(double x, double y);

int main()
{
    double a = 0.0;
    double b = 0.0;
    
    cout <<"Enter the first number and press ENTER: ";
    cin >> a;
    cout <<"Enter the second number and press ENTER: ";
    cin >> b;
    
    //Call the function avg().
    print_results(a, b);
    
    system("PAUSE");
	return 0;
}

//print_results function definition
void print_results(double a, double b) {
     cout << "Average is: " << avg(a, b) << endl;
}

//Average-number fuction definition
double avg(double x, double y) {
    return (x + y) / 2;
}
