#include "memory.hpp"


hardware_infos::Memory::Memory( std::string memory_type, 
                                size_t memory_size, 
                                float voltage )
{
    this->memory_size = memory_size;
    this->voltage = voltage;
    this->memory_type = memory_type;
}

std::string hardware_infos::Memory::get_memory_type()
{
    return this->memory_type;
}

size_t hardware_infos::Memory::get_memory_size()
{
    return this->memory_size;
}

float hardware_infos::Memory::get_memory_voltage()
{
    return this->voltage;
}
