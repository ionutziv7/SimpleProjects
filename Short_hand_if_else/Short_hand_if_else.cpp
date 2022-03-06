#include <iostream>
using namespace std;

int main()
{
    int time = 20, day = 12;
    if(time < 18) {
        cout << "Good day."<<endl;
    }
    else {
        cout<< "Good evening."<<endl;
    }
    string afternoon = (day >= 12 ) ? "Good afternoon!" : "Good morning!"; 
    cout<< afternoon<<endl;
    int current_time = 15;
    string result = (current_time < 18) ? "Good day." : "Good evening.";
    cout << result<<endl;
    
	return 0;
}
