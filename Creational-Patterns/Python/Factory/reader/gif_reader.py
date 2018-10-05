#!/usr/bin/env python
# coding=utf-8

from image import gif
from reader import image_reader

class GifReader(image_reader.ImageReader):

    def __init__(self):
        super(image_reader.ImageReader,self).__init__();

    def get_decoded_image(self, image : list ):
        return  gif.Gif(image);
