#include "abs_factory/factory-selector.hpp"

#include "abs_factory/windows-factory.hpp"
#include "abs_factory/linux-factory.hpp"

factory::Factory* factory::FactorySelector::get_factory( int widget_type )
{
    if( widget_type == LINUX_ENVIRONMENT )
    {
        return new factory::LinuxFactory;
    }else if( widget_type == WINDOWS_ENVIRONMENT )
    {
        return new factory::WindowsFactory;
    }
    else
    {
        return nullptr;
    }
}
