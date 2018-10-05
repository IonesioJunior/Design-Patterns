#ifndef _ABS_FACTORY_FACTORY_H_
#define _ABS_FACTORY_FACTORY_H_

#include "widget/widget.hpp"

namespace factory 
{

    class Factory 
    {
        public:
            virtual widget::Widget *create_button() = 0;
            virtual widget::Widget *create_menu() = 0;
    }; // Factory

} // abstract_factory namespace

#endif // _ABS_FACTORY_FACTORY_H_
