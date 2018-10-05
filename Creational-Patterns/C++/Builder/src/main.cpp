/*
 * Author : Ionésio Junior
 * Description : System that explains the behavior of builder pattern
 * */

#include "builder/director.hpp"
#include "builder/embedded_sytem_builder.hpp"
#include "builder/workstation_system_builder.hpp"

int main( int argc,char** argv )
{
    //Choosen O.S.
    operational_system::OperationalSystem *os;    
    

    builder_pattern::Director director;
    builder_pattern::EmbeddedSystemBuilder emb_builder;
    builder_pattern::WorkstationSystemBuilder work_builder;

    
    director.set_builder( &emb_builder );

    // Embedded System
    os = director.get_operational_system();
    printf("%s \n", os->get_hardware_infos().c_str() );

    director.set_builder( &work_builder );
    
    // Workstation System
    os = director.get_operational_system();
    printf("%s \n", os->get_hardware_infos().c_str());
    return 0;
}
