#include <iostream>
#include <array>
using namespace std;
//largest,second largest,smallest
int main()
{
    array<int,3> arr;
    cout<<"Enter the numbers\n";
    
    for(int i=0;i<3;i++)
    {
        cin>>arr.at(i);
    }
    
    for(int l=0;l<2;l++)
    {
        if(arr.at(l)>arr.at(l+1))
        {
        int temp=arr.at(l);
        arr.at(l)=arr.at(l+1);
        arr.at(l+1)=temp;
        l=-1;
        }
    }
    cout<<"Largest Number is : "<<arr.at(2)<<"\nSecond Largest Number is : "<<arr.at(1)<<"\nSmallest Number is : "<<arr.at(0);

    return 0;
}