/*
* author: Ionésio Junior
* Description : Simple code to show Singleton pattern applied in C++ Language
*/

#include <stdio.h>

#include "singleton.hpp"

void trying_write_file_in_another_context()
{
    singleton::LoggerSingleton::get_instance()->write_log_file();
}


void trying_close_file_in_another_context()
{
    singleton::LoggerSingleton::get_instance()->close_log_file();
}


int main(int argc,char** argv)
{
    bool result = singleton::LoggerSingleton::get_instance()->open_log_file("test.txt");
    trying_write_file_in_another_context();
    trying_close_file_in_another_context();
    return 0;
}
