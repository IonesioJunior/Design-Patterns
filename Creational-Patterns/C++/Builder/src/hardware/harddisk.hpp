#ifndef _HARDWARE_HARDDISK_H_
#define _HARDWARE_HARDDISK_H_

#include <string>


namespace hardware_infos
{
    class HardDisk
    {
        private:
            std::string hd_type;
            size_t storage_capacity;
        public:
            HardDisk( std::string hd_type, 
                      size_t storage_capacity );
            std::string get_type();
            size_t get_capacity();
    }; // HardDisk

} // hardware_infos

#endif // _OS_HARDWARE_HARDDISK_H_
