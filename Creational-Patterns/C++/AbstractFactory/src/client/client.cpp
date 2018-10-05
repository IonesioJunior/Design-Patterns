#include "client/client.hpp"


user::Client::Client(factory::Factory *factory)
{
    this->factory = factory;
}

void user::Client::draw()
{
    widget::Widget* btn = factory->create_button();
    widget::Widget* menu = factory->create_menu();
    display_widget(btn);
    display_widget(menu);   
}

void user::Client::display_widget(widget::Widget* widget)
{
    widget->draw();
}
