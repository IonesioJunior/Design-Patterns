#ifndef _ABS_LINUX_FACTORY_H_
#define _ABS_LINUX_FACTORY_H_

#include "abs_factory/abs_factory.hpp"

#include "widget/linux-button.hpp"
#include "widget/linux-menu.hpp"


namespace factory 
{
    
    class LinuxFactory : public Factory
    {
        public:
            widget::Widget *create_button() override;
            widget::Widget *create_menu() override;
    }; // LinuxFactory

} // factory namespace

#endif // _WIDGET_LINUX_FACTORY_H_
