#coding: utf-8


class HardDisk(object):

    def __init__(self, hd_type : str, hd_capacity : int):
        self.__hd_type = hd_type
        self.__hd_capacity = hd_capacity

    def __str__(self):
        return_str = "== HardDisk == \n"
        return_str += "HardDisk Type : {}\n".format(self.__hd_type)
        return_str += "HardDisk Capacity: {}\n".format(self.__hd_capacity)
        return return_str
