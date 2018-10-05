#ifndef _FACTORY_IMG_FACTORY_H_
#define _FACTORY_IMG_FACTORY_H_

#include "reader/image_reader.hpp"
#include "image/image.hpp"

namespace factory
{

    class ImageFactory 
    {
        private:
            reader::ImageReader* reader;
        public:
            image::Image* read_image( int *pixels, image::TYPE img_type );
    }; // ImageFactory

} // factory namespace

#endif // _FACTORY_IMG_FACTORY_H_
