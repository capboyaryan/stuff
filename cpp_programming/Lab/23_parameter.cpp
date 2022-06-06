#include <iostream>

using namespace std;

class Integer
{
    int i,k,l;
    public:
    Integer(int x):i{x}{};
    Integer(int x,int y):i{x},k{y}{};
    Integer(int x,int y,int z):i{x},k{y},l{z}{};
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