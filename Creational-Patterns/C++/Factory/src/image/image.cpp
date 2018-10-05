#include "image/image.hpp"


void image::Image::set_pixels(int* img)
{
    this->pixels = img;
}

int* image::Image::get_pixels()
{
    return this->pixels;
}
