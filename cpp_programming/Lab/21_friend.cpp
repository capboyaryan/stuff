#include <iostream>

using namespace std;

class my_pair
{
    friend int average_of_pair(const my_pair &p);
    private:
        int first;
        int second;
    public:
        my_pair(int a,int b)
        {
            this->first=a;
            this->second=b;
        }
};

int main()
{
    int a,b;
    cout<<"PLease enter two numbers\n";
    cin>>a>>b;

    my_pair p{a,b};
    average_of_pair(p);

}

int average_of_pair(const my_pair &p)
{
    int average=(p.first+p.second)/2;
    cout<<"Average is : "<<average;
    return average;
}