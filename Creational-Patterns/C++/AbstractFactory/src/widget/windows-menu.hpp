#ifndef _WIDGET_WINDOWS_MENU_H_
#define _WIDGET_WINDOWS_MENU_H_

#include "widget/widget.hpp"

namespace windows 
{

    class WindowsMenu : public widget::Widget
    {
        public:
            void draw() override;
    };

} // windows namespace

#endif // _WIDGET_WINDOWS_MENU_H_
