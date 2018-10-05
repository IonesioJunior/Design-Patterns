#ifndef _WIDGET_LINUX_MENU_H_
#define _WIDGET_LINUX_MENU_H_

#include "widget/widget.hpp"

namespace Linux 
{
    class LinuxMenu : public widget::Widget
    {
        public:
            void draw() override;
    }; // LinuxMenu

} // linux namespace
#endif // _ABS_FACTORY_LINUX_MENU_H_
