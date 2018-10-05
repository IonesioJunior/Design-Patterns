#ifndef _WIDGET_LINUX_BUTTON_H_
#define _WIDGET_LINUX_BUTTON_H_

#include "widget/widget.hpp"

namespace Linux 
{
    
    class LinuxButton : public widget::Widget 
    {
        public:
            void draw() override;
    }; // LinuxButton

} // linux namespace

#endif // _WIDGET_LINUX_BUTTON_H_
