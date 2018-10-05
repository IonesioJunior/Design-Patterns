#ifndef _BUILDER_EMB_BUILDER_H_
#define _BUILDER_EMB_BUILDER_H_

#include "builder.hpp"

#define MEMORY_TYPE "ROM"
#define MEMORY_SIZE 2
#define MEMORY_VOLTAGE 0.5

#define PROCESSOR_TYPE "RISC"
#define PROCESSOR_CACHE 3
#define PROCESSOR_CORES 1
#define PROCESSOR_CLOCK 1.5

#define HARDDISK_TYPE "SATA"
#define HARDDISK_STORAGE 200

namespace builder_pattern
{
    class EmbeddedSystemBuilder : public Builder
    {
        public:
            hardware_infos::Memory *get_memory();
            hardware_infos::Processor *get_processor();
            hardware_infos::HardDisk *get_hd();
    }; // EmbbededSystemBuilder

} // builder_pattern namespace

#endif //_OS_BUILDER_EMB_BUILDER_H_
