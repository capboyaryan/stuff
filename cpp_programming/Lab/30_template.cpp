#include <iostream>

using namespace std;

template <class T>
class MyVector
{
    T* arr;
    int store;
    int position;
    public:
    MyVector(int size)
    {
        arr=new T[size];
        length=size;
        position=0;
    };
    ~MyVector()
    {
        delete [] arr;
    }
    bool push_back(T input);
    bool pop_back();
    T at(int);
};
template <class T>
bool MyVector<T>::push_back(T input)
{
    if (position > (size-1))
    {
        cout<<"\nLimit of vector reached\n";
        return false;
    }
    else
    {
        arr[position] = input;
        position++;
        return true;
    }
}

template <class T>
bool MyVector<T>::pop_back()
{
    if((position-1)==(-1))
        return false;
    else
    {
        position--;
        return true;
    }
}

template <class T>
T MyVector<T>::at(int i)
{
    if(i>position)
    {
        cout<<"\nOut of bounds error\n";
    }
    else
    {
        return arr[i];
    }
}
template <class T>
ostream& operator<<(ostream &os,MyVector<T> vec)
{
    for(int i=0;i<)
};
int main()
{
    MyVector<int> vec{5};

}