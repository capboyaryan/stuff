#include <iostream>

using namespace std;

class Integer
{
    int i;

    public:
    Integer(){cout<<"\nDefault constructor called\n";}
    ~Integer(){cout<<"\nDefault destructor called\n";}
    Integer(const Integer &I){
        this->i=I.get_data();
        cout<<"\nCopy constructor called\n";
    }
    void set_data(int x){i=x;};
    int get_data() const {return i;};
};

int main()
{
    int num;
    cout<<"Enter a number : ";
    cin>>num;
   
    Integer a;
    a.set_data(num);
    cout<<"Value of a is : "<<a.get_data();
   
    Integer b{a};

    cout<<"Value of b is : "<<b.get_data();

}