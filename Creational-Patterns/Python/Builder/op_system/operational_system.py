#coding: utf-8

from hardware import processor
from hardware import memory
from hardware import harddisk

class OperationalSystem(object):
    
    def __init__( self, proc : processor.Processor, mem : memory.Memory, hd : harddisk.HardDisk ):
        self.__processor = proc
        self.__memory = mem
        self.__hd = hd

    def show_hardware_infos(self):
        ret_str = "=== HARDWARE INFOS === \n"
        ret_str += str(self.__processor) + str(self.__memory) + str(self.__hd)
        return ret_str
