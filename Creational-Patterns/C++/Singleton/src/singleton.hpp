#ifndef _LOGGER_SINGLETON_H_
#define _LOGGER_SINGLETON_H_

#include <string>


namespace singleton {
    
    class LoggerSingleton 
    {
        public:
            static LoggerSingleton *get_instance();
            bool open_log_file( std::string file );
            void write_log_file();
            bool close_log_file();

        private:
            LoggerSingleton(){};
            LoggerSingleton(LoggerSingleton const&){};
            LoggerSingleton& operator=(LoggerSingleton const&){};
            static LoggerSingleton* instance;
            std::string file_name;
    }; // LoggerSingleton

}

#endif // _LOGGER_SINGLETON_H_
