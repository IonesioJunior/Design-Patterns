#include "director.hpp"


void builder_pattern::Director::set_builder( Builder *builder_type )
{
    this->builder = builder_type;
}

operational_system::OperationalSystem * builder_pattern::Director::get_operational_system()
{
    hardware_infos::Processor *proc = this->builder->get_processor();
    hardware_infos::Memory *mem = this->builder->get_memory();
    hardware_infos::HardDisk *hd = this->builder->get_hd();

    operational_system::OperationalSystem *os = new operational_system::OperationalSystem( mem,proc, hd );
    return os;
}
