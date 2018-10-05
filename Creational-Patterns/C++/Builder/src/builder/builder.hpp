#ifndef _BUILDER_BUILDER_H_
#define _BUILDER_BUILDER_H_

#include "hardware/harddisk.hpp"
#include "hardware/processor.hpp"
#include "hardware/memory.hpp"

namespace builder_pattern
{
    class Builder
    {
        public:
            virtual hardware_infos::Memory* get_memory() = 0;
            virtual hardware_infos::Processor* get_processor() = 0;
            virtual hardware_infos::HardDisk* get_hd() = 0;
    }; //Builder

} // builder_pattern namespace

#endif // _OS_BUILDER_BUILDER_H_
