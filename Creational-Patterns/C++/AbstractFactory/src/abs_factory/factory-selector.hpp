#ifndef _ABS_FACTORY_SELECTOR_H_
#define _ABS_FACTORY_SELECTOR_H_

#include "abs_factory/abs_factory.hpp"
#include "utils/constants.h"

namespace factory {
    
    class FactorySelector
    {
        public:
            static Factory * get_factory(int widget_type);
    }; // FactorySelector

} // factory

#endif // _ABS_FACTORY_SELECTOR_H_
