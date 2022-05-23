#include <iostream>

using namespace std;

class default_behaviour
{
    public:
        int number;
        ~default_behaviour(){number=10;}
};

int main()
{
    int* ptr=new int;
    {
    default_behaviour d;
    cout<<"Value of number in default_behaviour class has been initialized to 0 by default constructor\n";
    cout<<"Value of number is : "<<d.number<<"\n";
    ptr=&(d.number);
    cout<<"VAlue of ptr : "<<(*ptr)<<endl;
    // d.~default_behaviour();
    }
    cout<<"\nValue at ptr: "<<(*ptr)<<endl;
    
    return 0;

}