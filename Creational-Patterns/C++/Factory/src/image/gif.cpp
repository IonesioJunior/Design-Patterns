#include "image/gif.hpp"


image::GIFImage::GIFImage(int *pixels)
{
    this->set_pixels( pixels );
}

std::string image::GIFImage::get_image_type()
{
    return "GIF Image";
}
