#include "singleton.hpp"

#include <iostream>

singleton::LoggerSingleton * singleton::LoggerSingleton::instance = NULL;

singleton::LoggerSingleton* singleton::LoggerSingleton::get_instance()
{
    if(!instance)
        instance = new LoggerSingleton;
    return instance;
}

bool singleton::LoggerSingleton::open_log_file( std::string file )
{
    std::cout << "Opening file : " << file << " ... "<< std::endl; 
    this->file_name = file;
}


void singleton::LoggerSingleton::write_log_file()
{
     std::cout << "Writing text on "<<  this->file_name << " ..." << std::endl;
}

bool singleton::LoggerSingleton::close_log_file()
{
    std::cout << "Closing file " << this->file_name << " ..." << std::endl;
    return true;
}
