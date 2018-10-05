#ifndef _READER_GIF_READER_H_
#define _READER_GIF_READER_H_

#include "reader/image_reader.hpp"
#include "image/gif.hpp"

namespace reader 
{

    class GIFReader : public ImageReader 
    {
        public:
            GIFReader();
            image::Image *get_decoded_image( int* image ) override;
    }; // GIFReader

} // reader namespace

#endif // _READER_GIF_READER_H_
