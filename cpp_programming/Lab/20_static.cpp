#include<iostream>
#include<E:\Programming\cpp_programming\Lab\20_class.h>
using namespace std;

int main()
{
    cls obj_1;
    cls obj_2;//as count is static it will be incremented(as defined in constructor) as every new object is initialized

    obj_1.put_count();
    {
        cls obj_3;
        obj_3.put_count();//count
        {
            cls obj_4;
            obj_4.put_count();//count will be 4
        }
        //obj_4 will be destroyed count will be 3
        obj_3.put_count();
    }
    //obj_3 will be destroyed
    obj_2.put_count();//count will be 2

}