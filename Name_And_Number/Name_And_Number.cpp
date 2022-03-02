#include <iostream>

using namespace std;

class My_class
{
private:
    int nr;
    string name;
public:
    int set_nr(int _nr) { nr = _nr;}
    int get_nr() {return nr;}
    string set_name(string _name) { name = _name;}
    string get_name() {return name;}
    My_class() {}
    ~My_class() {}
};

int main()
{
    My_class my_class;
    my_class.set_name("John");
    cout << my_class.get_name() << endl;
    my_class.set_nr(7);
    cout << my_class.get_nr() << endl;


    cout << "My name is: " << my_class.get_name() << " and my favourite number is: " << my_class.get_nr();
    return 0;
}
