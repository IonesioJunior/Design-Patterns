#ifndef _IMAGE_JPG_H_
#define _IMAGE_JPG_H_


#include "image/image.hpp"

namespace image
{

    class JPGImage : public Image
    {
        public:
            JPGImage(int* pixels);
            std::string get_image_type() override;
    }; // JPGImage

} // image namespace

#endif // _IMAGE_JPG_H_
