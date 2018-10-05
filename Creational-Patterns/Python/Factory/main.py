#!/usr/bin/env python
# coding=utf-8

__author__  = "Ionesio Junior"

" Code to show Factory Pattern behavior "

from factory import image_factory;

if __name__ == "__main__":
    factory = image_factory.ImageFactory
    decoded_img1 = factory.read_image([1,2,3,4,5,6], "gif")
    decoded_img2 = factory.read_image([1,2,3,4,5,6], "jpg")
    print(decoded_img1.get_image_type())
    print(decoded_img2.get_image_type())
