#ifndef _HARDWARE_PROCESSOR_H_
#define _HARDWARE_PROCESSOR_H_

#include <string>

namespace hardware_infos {

    class Processor
    {
        private:
            std::string processor_type;
            unsigned short int cache_number;
            unsigned short int cores;
            float clock;
        public:
            Processor(  std::string processor_type,
                        unsigned short int cache_number,
                        unsigned short int cores,
                        float clock );
            std::string get_processor_type();
            unsigned short int get_cache_number();
            unsigned short int get_cores();
            float get_clock();
    }; // Processor

}; // hardware_infos namespace

#endif // _OS_HARDWARE_PROCESSOR_H_
