#ifndef _BUILDER_DIRECTOR_H_
#define _BUILDER_DIRECTOR_H_

#include "builder.hpp"
#include "os/operational_system.hpp"

namespace builder_pattern
{
    class Director
    {
        private:
            Builder *builder;
        public:
            void set_builder( Builder *builder_type );
            operational_system::OperationalSystem *get_operational_system();
    }; // Director

} // builder_pattern namespace 

#endif // _OS_BUILDER_DIRECTOR_H_
