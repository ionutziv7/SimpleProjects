#include <iostream>
#include <time.h>
using namespace std;

enum colors { Red  = 1, Green = 2, Blue = 3, Yellow = 4, Violet = 5, LightBlue = 6, Black = 7, White = 8};
enum dayOfTheWeek {Monday = 1, Tuesday = 2 , Wednesday = 3, Thursday = 4, Friday = 5,  Saturday = 6, Sunday = 7  };

class Switch_Statements
{
public:
    colors Colors;
    dayOfTheWeek DayOfWeek;
    Switch_Statements() {
        cout<<"Simple switch statements generating:\n";
        cout<<"1.Random day\n";
        cout<<"2.Random colors\n\n";
    }
    void switch_day();
    void switch_colors();
    ~Switch_Statements() {
        cout<<"End of program\nRun again to see different results"<<endl;
    }
};

void Switch_Statements::switch_day() {
    srand(time(NULL));
    DayOfWeek = (dayOfTheWeek)((rand() % 6) + 1);
    switch(DayOfWeek)
    {
        case 1:
            cout<<"Monday\n";
            break;
        case 2:
            cout<<"Tuesday\n";
            break;
        case 3:
            cout<<"Wednesday\n";
            break;
        case 4:
            cout<<"Thursday\n";
            break;
        case 5:
            cout<<"Friday\n";
            break;
        case 6:
            cout<<"Saturday\n";
            break;
        case 7:
            cout<<"Sunday\n";
            break;
        default:
            cout<<"Unknown day...\n";
            break;
    }
}

void Switch_Statements::switch_colors() {
    srand(time(NULL));
    Colors = (colors)((rand() % 8) + 1);
    switch(Colors)
    {
        case Red:
            cout<<"Red\n" << endl;
            break;
        case Green:
            cout<<"Green\n"<<endl;
            break;
        case Blue:
            cout<<"Blue\n" << endl;
            break;
        case Yellow:
            cout<<"Yellow\n" << endl;
            break;
        case Violet:
            cout<<"Violet\n"<<endl;
            break;
        case LightBlue:
            cout<<"LightBlue\n"<<endl;
            break;
        case Black:
            cout<<"Black\n"<<endl;
            break;
        case White:
            cout<<"White\n"<<endl;
            break;
        default:
            cout<<"\nUnknown color...\n"<<endl;
            break;
    }
}

int main()
{ 
    Switch_Statements switch_statements;
    cout<<"Random day  : \t";
    switch_statements.switch_day();
    cout<<"Random color: \t";
    switch_statements.switch_colors();
	return 0;
}
