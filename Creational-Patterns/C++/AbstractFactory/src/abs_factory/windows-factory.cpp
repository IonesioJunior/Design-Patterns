#include "abs_factory/windows-factory.hpp"


widget::Widget * factory::WindowsFactory::create_button()
{
    return new windows::WindowsButton;
}

widget::Widget * factory::WindowsFactory::create_menu(){
    return new windows::WindowsMenu;
}
