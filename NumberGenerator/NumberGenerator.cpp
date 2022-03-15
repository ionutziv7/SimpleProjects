#include <iostream>
#include <time.h>
#include <ctime>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

void numberGenerator()
{
    int number;
    srand(time(0));
    for(int i =1; i<=6; i++)
    {
        number = rand() % 49 + 1;
        cout <<  number <<" ";
    }
}

int main()
{
    cout <<"Winning numbers: "<<endl;
    numberGenerator();
    return 0;
}
