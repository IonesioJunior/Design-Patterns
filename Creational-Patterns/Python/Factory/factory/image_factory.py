#!/usr/bin/env python
# coding=utf-8


from image import jpg,gif
from reader import gif_reader, jpg_reader

class ImageFactory(object):

    @staticmethod
    def read_image(pixels: list, img_type: str ):
        if( img_type == "gif" ):
            reader = gif_reader.GifReader();
        elif( img_type == "jpg" ):
            reader = jpg_reader.JPGReader();
        else:
            return None
        return reader.get_decoded_image( pixels );
