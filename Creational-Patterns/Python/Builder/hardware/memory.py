#coding: utf-8


class Memory(object):

    def __init__(self,mem_type: str, mem_size: int, mem_voltage: float):
        self.__mem_type = mem_type
        self.__mem_size = mem_size
        self.__mem_voltage = mem_voltage

    def __str__(self):
        return_str = "== Memory == \n"
        return_str += "Memory type : {}\n".format(self.__mem_type)
        return_str += "Memory Size : {}\n".format(self.__mem_size)
        return_str += "Memory Voltage: {}\n".format(self.__mem_voltage)
        return return_str
