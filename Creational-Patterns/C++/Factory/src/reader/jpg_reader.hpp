#ifndef _READER_JPG_READER_H_
#define _READER_JPG_READER_H_

#include "reader/image_reader.hpp"
#include "image/jpg.hpp"

namespace reader
{

    class JPGReader : public ImageReader
    {
        public:
            JPGReader();
            image::Image* get_decoded_image(int* img) override;
    }; // JPGReader

} // reader namespace

#endif // _READER_JPG_READER_H_
