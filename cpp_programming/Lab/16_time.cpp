#include <iostream>
#include <cstring>
#include <ctime>
using namespace std;

int main()
{
    int day,month,year;
    cout<<"Enter Day,Month and Year from which you want number of days(divide by spaces)"<<endl;
    cin>>day>>month>>year;

    tm input_time={0};
    input_time.tm_mday=day;
    input_time.tm_mon=month-1;
    input_time.tm_year=year-1900;

    time_t converted_input_time=mktime(&input_time);

    time_t current_time=time(0);
    tm current={};
    tm* current_ptr=&current;
    current_ptr=gmtime(&current_time);
    current_ptr->tm_hour=current_ptr->tm_min=current_ptr->tm_sec=0;
    current_time=mktime(current_ptr);

    int number_of_days=(int)((converted_input_time-current_time)/86400);
    cout<<"The number of days between today and the inputted date is : "<<number_of_days;

    return 0;
}