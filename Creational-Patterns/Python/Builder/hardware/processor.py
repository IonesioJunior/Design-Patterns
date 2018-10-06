#coding: utf-8


class Processor(object):

    def __init__(self,processor_type: str, cores: int, clock: int, cache: int):
        self.__processor_type = processor_type
        self.__clock = clock
        self.__cache = cache
        self.__cores = cores

    def __str__(self):
        return_str = "== Processor ==\n"
        return_str += "Processor type : {}\n".format(self.__processor_type)
        return_str += "Processor clock: {}\n".format(self.__clock)
        return_str += "Processor cache: {}\n".format(self.__cache)
        return_str += "Processor cores: {}\n".format(self.__cores)
        return return_str
