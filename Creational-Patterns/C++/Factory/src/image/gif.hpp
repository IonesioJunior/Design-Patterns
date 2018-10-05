#ifndef _IMAGE_GIF_H_
#define _IMAGE_GIF_H_

#include "image/image.hpp"

namespace image
{
    
    class GIFImage : public Image 
    {
        public:
            GIFImage(int* pixels);
            std::string get_image_type() override;    
    }; // GIFImage

} // image namespace

#endif // _IMAGE_GIF_H_
