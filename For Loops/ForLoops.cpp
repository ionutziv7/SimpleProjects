#include <iostream>
using namespace std;

int main()
{
    for(int i = 1; i <= 5; i++)
        cout << i << " "; 
    cout <<endl<<endl;
    
    for(int i = 10; i<= 20; i++)
        cout << i <<" ";
     cout <<endl<<endl;
     
     int n1 = 17, n2 = 26;
     for(int i = n1; i <= n2; i++)
         cout << i << " ";
     cout <<endl<<endl;
     
     for(int i = 10; i >= 1; i--)
            cout << i << " ";
     cout <<endl<<endl;
     
     for( int i = 1; i <=11; i = i + 2)
            cout << i << " ";
     cout <<endl<<endl;
     
     for(int j = 1; j <=5; j++)
         cout << j * 2 << " ";
    cout <<endl<<endl;
    
     for(int i=1; i<=3; i++) {
     for(int j = 1; j<=7; j++) {
            cout << i << " * " << j << " = " << i * j<<endl;
        }
        cout<<endl;
    }
    //for(;;) {
    //    cout<<"infinite loop "<<endl;
    //}
    for (;;) {
    // Do some stuff...
    cout << "Enter a number and press ENTER: ";
    int n;
    cin >> n;
    if (n == 0)
    break;
    // Do some more stuff...
    }
	return 0;
}
