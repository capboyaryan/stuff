#include <iostream>
#include <string>
#include "player.h"
using namespace std;

int main()
{
    player player1;
    player1.set_name("Aryan");
    player1.set_health(100);
    int ph=player1.get_health();
    string pn=player1.get_name();
    cout<<"Player name is: "<<pn<<endl<<"Health is: "<<ph;
    return 0;
}
