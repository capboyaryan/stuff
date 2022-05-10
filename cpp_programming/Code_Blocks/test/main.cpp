#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    fstream f;
    f.open("test.txt",ios::in);
    string line;
    int tell;

    while(f)
    {
        getline(f,line);
        cout<<line<<"\n";
        if(f.tellg()!=(-1))
        {
            cout<<"\nLOGIC\n";
        }
        tell=f.tellg();
        //cout<<tell<<"\n";
    }

    return 0;
}
