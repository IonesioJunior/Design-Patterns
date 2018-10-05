#!/usr/bin/env python
# coding=utf-8

from abc import ABC,abstractmethod

class Image(ABC):

    @abstractmethod
    def get_image_type(self):
        pass
