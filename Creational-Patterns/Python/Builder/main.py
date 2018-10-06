#coding: utf-8

__author__ = "Ionesio Junior"

''' Code to show builder pattern behavior '''

from builder_pattern import director
from builder_pattern import workstation_system_builder
from builder_pattern import embedded_system_builder

from op_system import operational_system



if __name__ == "__main__":
    direc = director.Director()
    direc.set_builder( workstation_system_builder.WorkstationSystemBuilder() )
    
    workstation_os = direc.get_operational_system()
    print (workstation_os.show_hardware_infos())
    
    direc.set_builder( embedded_system_builder.EmbeddedSystemBuilder() )
    
    embedded_os = direc.get_operational_system()
    print (embedded_os.show_hardware_infos())   
