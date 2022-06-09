#include <iostream>
#include <array>
#include <conio.h>
using namespace std;
//largest,second largest,smallest
int main()
{
    clrscr();
    array<int,3> arr;
    cout<<"Enter the numbers\n";
    
    for(int i=0;i<3;i++)
    {
        cin>>arr.at(i);
    }
    
    if(arr.at(0)>arr.at(1))
    {
        if(arr.at(0)>arr.at(2))
        {
            cout<<"Largest Number is : "<<arr.at(0)<<endl;
        }
        else
        {
            cout<<"Largest Number is : "<<arr.at(2)<<endl;
        }
    }
    else
    {
        if(arr.at(1)>arr.at(2))
        {
            cout<<"Largest Number is : "<<arr.at(1)<<endl;
        }
        else
        {

        }
    }

    return 0;
}