#include "factory/factory.hpp"

#include "reader/gif_reader.hpp"
#include "reader/jpg_reader.hpp"

image::Image * factory::ImageFactory::read_image(int *pixels, image::TYPE img_type )
{
    if( img_type == image::GIF )
    {
        this->reader = new reader::GIFReader();    
    }
    else if( img_type == image::JPG )
    {
        this->reader = new reader::JPGReader();
    }
    else
    {
        return NULL;
    }
    return reader->get_decoded_image(pixels);
}
