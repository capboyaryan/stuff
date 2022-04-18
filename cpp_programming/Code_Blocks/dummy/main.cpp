#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<int> test{1,10,15};
    test.push_back(2);
    cout<<test[0];

    return 0;
}
