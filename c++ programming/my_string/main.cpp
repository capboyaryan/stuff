#include <iostream>
#include <My_string.h>
using namespace std;

int main()
{
    My_string s{My_string {"No"}};
    My_string string_1;
    string_1="Hello";
    My_string string_2{" World"};
    My_string string_3{string_1};
    string_3.display();
    string_2.display();
    My_string string_4{"Why?"};
    string_3=string_4;
    string_3.display();

    return 0;
}
