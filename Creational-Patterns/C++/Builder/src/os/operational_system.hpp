#ifndef _OS_OPERATIONAL_SYS_H_
#define _OS_OPERATIONAL_SYS_H_

#include "hardware/harddisk.hpp"
#include "hardware/memory.hpp"
#include "hardware/processor.hpp"

namespace operational_system
{
    class OperationalSystem
    {
        private:
            hardware_infos::Memory *mem;
            hardware_infos::Processor *proc;
            hardware_infos::HardDisk *hd;
        public:
            OperationalSystem( hardware_infos::Memory *mem,
                               hardware_infos::Processor *proc,
                               hardware_infos::HardDisk *hd );
            std::string get_hardware_infos();
    }; // OperationalSystem

} // operational_system namespace

#endif // _OS_OPERATIONAL_SYS_H_
