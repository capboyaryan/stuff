#include <iostream>
#include <cstring>

using namespace std;

class String
{
    char* str;
public:
    String(char* temp)
    {
        if(temp==nullptr)
        {
            str=new char[1];
            *str='\0';
        }
        else
        {
            str=new char[strlen(temp)+1];
            strcpy(str,temp);
        }
    }

    char* get_string() const {return str;};

    String& operator+(const String& S)
    {
        strcat(this->str,S.get_string());
        return *this;
    }

    bool operator<(const String& S)
    {
        if(strcmp(this->str,S.get_string())<0)
        {
            return true;
        }
        else 
            return false;
    }
    bool operator>(const String& S)
    {
         if(strcmp(this->str,S.get_string())>0)
        {
            return true;
        }
        else 
            return false;
    }
    bool operator==(const String& S)
    {
        if(strcmp(this->str,S.get_string())==0)
            return true;
        else 
            return false;
    }
};


int main()
{
    char* str_1=new char[30];
    char* str_2=new char[30];

    cout<<"Enter first string"<<endl;


}