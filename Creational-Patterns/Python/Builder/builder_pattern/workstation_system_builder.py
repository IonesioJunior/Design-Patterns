#coding: utf-8

from builder_pattern import builder
from hardware import processor,memory,harddisk

class WorkstationSystemBuilder(builder.AbstractBuilder):

    def get_memory(self):
        return memory.Memory("DDR4",16,1.5)

    def get_processor(self):
        return processor.Processor("CISC", 4,8,3.2)

    def get_harddisk(self):
        return harddisk.HardDisk("SSD",256)
