#include "workstation_system_builder.hpp"


hardware_infos::Memory *builder_pattern::WorkstationSystemBuilder::get_memory()
{
    hardware_infos::Memory *mem = new hardware_infos::Memory(MEMORY_TYPE, MEMORY_SIZE, MEMORY_VOLTAGE);
    return mem;
}

hardware_infos::Processor *builder_pattern::WorkstationSystemBuilder::get_processor()
{
    hardware_infos::Processor *proc = new hardware_infos::Processor(PROCESSOR_TYPE,PROCESSOR_CACHE,PROCESSOR_CORES,PROCESSOR_CLOCK);
    return proc;
}

hardware_infos::HardDisk *builder_pattern::WorkstationSystemBuilder::get_hd()
{
    hardware_infos::HardDisk *hd = new hardware_infos::HardDisk(HARDDISK_TYPE,HARDDISK_STORAGE);
    return hd;
}

