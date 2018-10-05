#include "operational_system.hpp"


operational_system::OperationalSystem::OperationalSystem( hardware_infos::Memory *mem,
                                                          hardware_infos::Processor *proc,
                                                          hardware_infos::HardDisk *hd)
{
    this->mem = mem;
    this->proc = proc;
    this->hd = hd;
}

std::string operational_system::OperationalSystem::get_hardware_infos()
{
    std::string memory_infos = "=== Memory Infos === \n";
    std::string proc_infos = "=== Processor Infos === \n";
    std::string hd_infos = "=== HardDisk Infos === \n";

    // Set memory infos
    memory_infos += "Memory type : " + this->mem->get_memory_type() + "\n";
    memory_infos += "Memory Size : " + std::to_string( this->mem->get_memory_size() ) + " GB \n";
    memory_infos += "Memory Voltage : " + std::to_string(this->mem->get_memory_voltage() ) + "\n";

    // Set processor infos
    proc_infos += "Processor type : " + this->proc->get_processor_type() + "\n";
    proc_infos += "Processor Cache : " + std::to_string( this->proc->get_cache_number() ) + "\n";
    proc_infos += "Processor Cores : " + std::to_string( this->proc->get_cores() ) + "\n";
    proc_infos += "Processor Clock : " + std::to_string( this->proc->get_clock() ) + " GHz\n";

    // Set harddisk infos
    hd_infos += "HardDisk type : " + this->hd->get_type() + "\n";
    hd_infos += "HardDisk Capacity : " + std::to_string( this->hd->get_capacity() ) + " GB\n";
    return memory_infos + proc_infos + hd_infos;
}
