#include "processor.hpp"


hardware_infos::Processor::Processor(   std::string processor_type,
                                        unsigned short int cache_number,
                                        unsigned short int cores,
                                        float clock )
{
    this->processor_type = processor_type;
    this->cache_number = cache_number;
    this->cores = cores;
    this->clock = clock;
}

std::string hardware_infos::Processor::get_processor_type()
{
    return this->processor_type;
}

unsigned short int hardware_infos::Processor::get_cache_number()
{
    return this->cache_number;
}

unsigned short int hardware_infos::Processor::get_cores()
{
    return this->cores;
}

float hardware_infos::Processor::get_clock()
{
    return this->clock;
}
