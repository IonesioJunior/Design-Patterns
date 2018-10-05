#include "abs_factory/linux-factory.hpp"


widget::Widget* factory::LinuxFactory::create_button(){
    return new Linux::LinuxButton;
}

widget::Widget* factory::LinuxFactory::create_menu(){
    return new Linux::LinuxMenu;
}
