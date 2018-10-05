#!/usr/bin/env python
# coding=utf-8

from image import image

class JPG(image.Image):
    def __init__(self,image: list):
        self.pixels = image

    def get_image_type(self):
        return "JPG"
