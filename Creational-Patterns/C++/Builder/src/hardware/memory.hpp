#ifndef _HARDWARE_MEMORY_H_
#define _HARDWARE_MEMORY_H_

#include <stdio.h>
#include <stdlib.h>
#include <string>

namespace hardware_infos {
    
    class Memory 
    {
        private:
            size_t memory_size;
            std::string memory_type;
            float voltage;
        public:
            Memory( std::string memory_type, 
                    size_t memory_size, 
                    float voltage);
            std::string get_memory_type();
            size_t get_memory_size();
            float get_memory_voltage();
    }; //Memory

} // hardware_infos

#endif // _OS_HARDWARE_MEMORY_H_
