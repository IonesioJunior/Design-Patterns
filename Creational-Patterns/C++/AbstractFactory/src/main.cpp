/**
 * Author : Ionésio Junior
 * Description : System that explains the behavior of abstract factory pattern
 * */

#include "abs_factory/abs_factory.hpp"
#include "abs_factory/factory-selector.hpp"
#include "client/client.hpp"



int main(int argc,char** argv)
{
    factory::Factory *factory;
    factory::FactorySelector *selector = new factory::FactorySelector;

#ifdef LINUX
    factory = selector->get_factory(LINUX_ENVIRONMENT);
#else
    factory = selector->get_factory(WINDOWS_ENVIRONMENT);
#endif
    
    user::Client *c = new user::Client(factory);
    c->draw();
    return 0;
}
