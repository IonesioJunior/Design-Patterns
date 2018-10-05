#include "reader/jpg_reader.hpp"


reader::JPGReader::JPGReader( void )
{

}

image::Image* reader::JPGReader::get_decoded_image(int* img)
{
    return new image::JPGImage(img);
}
