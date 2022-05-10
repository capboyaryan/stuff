#include<E:\Programming\cpp_programming\Lab\20_class.h>
#include<iostream>

int cls::count;

cls::cls()
{
    count++;
}

cls::~cls()
{
    count--;
}

void cls::put_count()
{
    std::cout<<"Number of instantiated objects of cls is : "<<count<<std::endl;
}