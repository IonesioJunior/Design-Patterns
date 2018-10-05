#ifndef _CLIENT_CLIENT_H_
#define _CLIENT_CLIENT_H_

#include "abs_factory/abs_factory.hpp"

namespace user {
    
    class Client
    {

        private:
            factory::Factory *factory;
            void display_widget(widget::Widget * wgt);
        public:
            Client(factory::Factory *f);
            void draw();

    }; // Client class

} // user namespace

#endif // _CLIENT_CLIENT_H_
