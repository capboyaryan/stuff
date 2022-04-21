#include <iostream>

using namespace std;

int linear_search(const int source[],int length,int element);
int binarySearch(const int source[],int length,int element);

int main()
{
    cout<<"Enter length of array: ";
    int len;
    cin>>len;

    cout<<"Enter elements of the array: ";
    int arr[len];
    for(int i=0;i<len;i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter element to be searched: ";
    int element_find;
    cin>>element_find;

    cout<<"\nBy Linear Search\n\n";
    int temp=linear_search(arr,len,element_find);
    if(temp!=(-1))
        cout<<"Element "<<element_find<<" is at the position :"<<temp+1<<endl;
    else
        cout<<"Element not found\n";


    cout<<"\nBy Binary Search\n\n";
    int temp_2=binarySearch(arr,len,element_find);
    if(temp_2!=(-1))
        cout<<"Element "<<element_find<<" is at the position :"<<temp_2+1<<endl;
    else
        cout<<"Element not found\n";


    return 0;
}


int linear_search(const int source[],int length,int element)
{
    for(int i=0;i<length;i++)
    {
        if(source[i]==element)
        {
            return i;
        }
        else if(i==(length-1) && source[i]!=element)
            return -1;
    }
    return 0;
}

int binarySearch(const int source[],int length,int element)
{
    int end_of_array,start_of_array,middle_of_array;
    end_of_array=length-1;
    start_of_array=0;

    while(start_of_array<=end_of_array)
    {
        middle_of_array=(end_of_array+start_of_array)/2;
        if(source[middle_of_array]==element)
            return middle_of_array;
        else if(source[middle_of_array]>element)
            end_of_array=middle_of_array-1;
        else
            start_of_array=middle_of_array+1;
    }
    return -1;
}
