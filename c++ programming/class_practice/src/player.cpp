#include "player.h"
//methods

std::string player::get_name()
{
    std::string t=*name;
    return t;
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
player::player(std::string name_val,int health_val):name{new std::string{name_val}},health{health_val}
{
}
player::~player()
{
    delete name;
    //dtor
}
