#include <iostream>
#include <vector>
#include "Account.h"
#include "Checking.h"
#include "Account_Util.h"
using namespace std;
int main()
{
    vector<Checking> a;
    a.push_back(Checking("First",1500.0));
    display(a);
    
    return 0;
}
