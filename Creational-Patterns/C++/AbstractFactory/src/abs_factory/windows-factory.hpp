#ifndef _ABS_FACTORY_WINDOWS_H_
#define _ABS_FACTORY_WINDOWS_H_

#include "abs_factory/abs_factory.hpp"

#include "widget/windows-button.hpp"
#include "widget/windows-menu.hpp"

namespace factory
{
    
    class WindowsFactory : public Factory 
    {
        public:
            widget::Widget* create_button() override;
            widget::Widget* create_menu() override;
    }; //WindowsFactory

} // factory namespace

#endif // _WIDGET_FACTORY_WINDOWS_H_
