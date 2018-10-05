#include "reader/gif_reader.hpp"


reader::GIFReader::GIFReader( void )
{

}

image::Image* reader::GIFReader::get_decoded_image(int* img)
{
    return new image::GIFImage(img);
}
