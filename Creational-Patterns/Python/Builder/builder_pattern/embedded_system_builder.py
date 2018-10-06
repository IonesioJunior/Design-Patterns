#coding: utf-8

from hardware import processor,memory,harddisk
from builder_pattern import builder

class EmbeddedSystemBuilder(builder.AbstractBuilder):
    
    def get_memory(self):
        return memory.Memory("ROM", 2,1.5)
    
    def get_processor(self):
        return processor.Processor("RISC",3,1,1.5)
    
    def get_harddisk(self):
        return harddisk.HardDisk("SATA",200)
