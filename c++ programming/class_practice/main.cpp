#include <iostream>
#include <string>
#include "player.h"
using namespace std;

int main()
{
    player player1;
    player1.set_name("Aryan");
    player1.set_health(100);
    player player2("Kinshuk",75);

    cout<<"Player "<<player1.get_name()<<"'s health is: "<<player1.get_health()<<endl;
    cout<<"Player "<<player2.get_name()<<"'s health is: "<<player2.get_health();
    return 0;
}
