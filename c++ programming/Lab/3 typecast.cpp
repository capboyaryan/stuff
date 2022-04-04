#include <iostream>

using namespace std;
//typecast
int main()
{
    float a{1.5},b{6.8};
    int c{0},d{0};
    
    c=(int)a;//explicit
    d=(b);//impiicit
    cout<<a<<"\t"<<b<<"\n";
    cout<<c<<"\t"<<d;

    return 0;
}