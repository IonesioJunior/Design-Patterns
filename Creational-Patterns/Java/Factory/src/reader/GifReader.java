package reader;

import image.AbstractImage;
import image.Gif;

public class GifReader implements ImageReader {

    public GifReader(){
    
    }
        
    public AbstractImage getDecodedImage( int[] image ) {
        return new Gif( image );
    }

}
