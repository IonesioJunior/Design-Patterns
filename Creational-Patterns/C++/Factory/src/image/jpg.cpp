#include "image/jpg.hpp"


image::JPGImage::JPGImage(int *pixels)
{
    this->set_pixels( pixels );
}

std::string image::JPGImage::get_image_type()
{
    return "JPG Image";
}
