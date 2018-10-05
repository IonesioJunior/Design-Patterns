#ifndef _READER_IMG_READER_H_
#define _READER_IMG_READER_H_

#include "image/image.hpp"

namespace reader
{

    class ImageReader 
    {
        public:
          virtual image::Image *get_decoded_image( int* img ) = 0;  
    }; // ImageReader

} // reader namespace

#endif // _READER_ABS_READER_H_
