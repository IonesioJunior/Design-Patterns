#coding: utf-8

from builder_pattern import builder
from op_system import operational_system

class Director(object):

    def set_builder(self, builder_type : builder.AbstractBuilder):
        self.__builder = builder_type

    def get_operational_system(self):
        return operational_system.OperationalSystem(self.__builder.get_processor(), self.__builder.get_memory(), self.__builder.get_harddisk())
