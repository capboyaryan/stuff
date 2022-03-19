#include "player.h"
//methods

std::string player::get_name()
{
    return (*name);
}
int player::get_health()
{
    return health;
}
void player::set_name(std::string g)
{
    *name=g;
}
void player::set_health(int a)
{
    health=a;
}
player::player()
{
    name=new std::string;
    //ctor
}

player::~player()
{
    delete name;
    //dtor
}
