#include <iostream>
#include <string>
using namespace std;

int main()
{
    string first_name = "John ";
    string last_name = "Iv";
    
    string full_name = first_name.append(last_name);
    cout<<full_name;
    
    cout<<endl<<"Getting the length of the string using length() method: "<<full_name.length()<<endl;
    cout<<"Getting the length using size() method which is an alias for length: "<<full_name.size()<<endl;
    
    cout<<full_name[0]<<endl;
    full_name[0] = 'I';
    cout<<full_name<<endl;
    
    /*
     * However, cin considers a space (whitespace, tabs, etc) as a terminating character, 
     * which means that it can only display a single word (even if you type many words):
    string fullName;
    cout << "Type your full name: ";
    cin >> fullName;
    cout << "Your name is: " << fullName;
    
     * From the example above, you would expect the program to print "John Doe", 
     * but it only prints "John".
    // Type your full name: John Doe
    // Your name is: John
    */
    
    //That's why, when working with strings, we often use the getline() function to read a line of text. 
    //It takes cin as the first parameter, and the string variable as second:
    string fullName;
    cout<<"Type your full name: ";
    getline(cin, fullName);
    cout<<"Your name is: "<<fullName;
    
	return 0;
}
