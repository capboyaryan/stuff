#include "My_string.h"
#include <cstring>
#include <iostream>
//constructor
My_string::My_string():str{new char[1]{'\0'}}{}
My_string::My_string(const char* src):str{nullptr}
{
    if(src==nullptr)
    {
        str=new char[1]{'\0'};
    }
    str=new char[strlen(src)+1];
    strcpy(str,src);
}
//copy constructor
My_string::My_string(const My_string &source):My_string(source.str){}
//move constructor
My_string::My_string(My_string &&source) noexcept
{
    str=source.str;
    source.str=nullptr;
}
//destructor
My_string::~My_string() {
    delete [] str;
}
//methods
void My_string::display()
{
    std::cout<<str<<std::endl;
}
int My_string::get_length()
{
    return(strlen(str));
}
//operator overloading
My_string &My_string::operator=(const My_string &rhs)
{
    if(this==&rhs)
        return *this;
    delete [] str;
    str=new char[strlen(rhs.str)+1];
    strcpy(str,rhs.str);
    return *this;
}
My_string &My_string::operator=(My_string &&rhs)
{
    if(this == &rhs)
        return *this;
    delete [] str;
    str=rhs.str;
    rhs.str=nullptr;
    return *this;
}
