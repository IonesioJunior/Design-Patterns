#ifndef _BUILDER_WORKSTATION_BUILDER_H_
#define _BUILDER_WORKSTATION_BUILDER_H_

#include "builder.hpp"

#define MEMORY_TYPE "DDR4"
#define MEMORY_SIZE 16
#define MEMORY_VOLTAGE 1.5

#define PROCESSOR_TYPE "CISC"
#define PROCESSOR_CACHE 4
#define PROCESSOR_CORES 8
#define PROCESSOR_CLOCK 3.5


#define HARDDISK_TYPE "SSD"
#define HARDDISK_STORAGE 256

namespace builder_pattern
{
    class WorkstationSystemBuilder : public Builder
    {
        public:
            hardware_infos::Memory *get_memory();
            hardware_infos::Processor *get_processor();
            hardware_infos::HardDisk *get_hd();
    }; // WorkstationSystemBuilder

} // builder_pattern namespace

#endif // _BUILDER_WORKSTATION_BUILDER_H_
