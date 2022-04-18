#include <iostream>

using namespace std;

void insert_element(int*,int,int,int);

int main()
{
    cout <<"Enter length of list: ";
    int length=0;
    cin>>length;

    int* lis=new int[length];
    cout<<"Enter elements of the list: ";
    for(int i=0;i<length;i++)
    {
        cin>>lis[i];
    }

    cout<<"Enter number to be inserted: ";
    int number=0;
    cin>>number;

    cout<<"Enter position to be inserted at: ";
    int pos=0;
    for(;;)
    {
        cin>>pos;
        if(pos<=length)
            break;
        else
            cout<<"Invalid position"<<endl;
    }
    insert_element(lis,length,number,pos);

    cout<<"List after insertion: ";
    for(int i=0;i<length+1;i++)
    {
        cout<<lis[i]<<" ";
    }

    delete [] lis;

    return 0;
}

void insert_element(int* source,int src_len,int element,int position)//{1,2,3,4},4,0,3
{
    int* temp=new int[src_len+1];

    for(int i=0;i<position-1;i++)
    {
        temp[i]=source[i];
    }                       //after completion of loop temp={1,2}

    temp[position-1]=element;//temp={1,2,0}

    for(int j=position-1,k=position;j<src_len;j++,k++)
    {
        temp[k]=source[j];
    }                       //after completion of loop={1,2,0,3,4}

    delete [] source;
    source=new int[src_len+1];
    for(int i=0;i<src_len+1;i++)
        source[i]=temp[i];
    delete [] temp;
}
