#coding: utf-8


from abc import ABC, abstractmethod

class AbstractBuilder(ABC):

    @abstractmethod
    def get_memory(self):
        pass
    
    @abstractmethod
    def get_processor(self):
        pass

    @abstractmethod
    def get_harddisk(self):
        pass
