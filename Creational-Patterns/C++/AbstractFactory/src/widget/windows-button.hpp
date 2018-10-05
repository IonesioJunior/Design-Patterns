#ifndef _WIDGET_WINDOWS_BUTTON_H_
#define _WIDGET_WINDOWS_BUTTON_H_


#include "widget/widget.hpp"

namespace windows 
{

    class WindowsButton : public widget::Widget 
    {
        public:
            void draw() override;
    }; // WindowsButton

} // windows namespace

#endif // _WIDGET_WINDOWS_BUTTON_H_
