#include "harddisk.hpp"


hardware_infos::HardDisk::HardDisk( std::string hd_type, size_t capacity )
{
    this->hd_type = hd_type;
    this->storage_capacity = capacity;
}

std::string hardware_infos::HardDisk::get_type()
{
    return this->hd_type;
}

size_t hardware_infos::HardDisk::get_capacity()
{
    return this->storage_capacity;
}
