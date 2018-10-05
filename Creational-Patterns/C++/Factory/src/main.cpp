/*
 * Author : Ionésio Junior
 * Description : Factory pattern code example
 * */

#include <stdio.h>
#include <stdlib.h>

#include "factory/factory.hpp"
#include "image/image.hpp"

int main(int argc,char** argv)
{
    factory::ImageFactory *factory = new factory::ImageFactory();

    int *pixels = (int*) malloc(15 * sizeof(int));
    
    // Build GIF
    image::Image* img = factory->read_image(pixels,image::GIF);
    printf("Image type : %s\n", img->get_image_type().c_str());
    
    //Build JPG Image
    img = factory->read_image(pixels,image::JPG);
    printf("Image type : %s \n", img->get_image_type().c_str());

    free( pixels );
    return 0;
}
