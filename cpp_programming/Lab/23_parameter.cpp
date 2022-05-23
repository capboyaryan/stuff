#include <iostream>

using namespace std;

class Integer
{
    int i;
    public:
    Integer(int x):i{x}{};
    int get_integer(){return i;};

};

int main()
{
    cout<<"Please enter a number: ";
    int num;
    cin>>num;

    Integer a(num);
    cout<<"Value of Integer using parameterized constructor is : "<<a.get_integer()<<"\n";
}