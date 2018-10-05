#!/usr/bin/env python
# coding=utf-8

from abc import ABC,abstractmethod

class ImageReader(ABC):

    @abstractmethod
    def get_decoded_image(self, image : list):
        pass
