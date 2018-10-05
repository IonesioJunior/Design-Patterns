#ifndef _IMAGE_IMAGE_H_
#define _IMAGE_IMAGE_H_

#include <string>

namespace image
{
    enum TYPE {
        GIF = 1,
        JPG = 2
    }; // TYPE enum

    class Image 
    {
        private:
            int* pixels;
        public:
            virtual std::string get_image_type() = 0;
            void set_pixels(int* img);
            int* get_pixels();
    }; // Image

} // image namespace

#endif // _IMAGE_IMAGE_H_
