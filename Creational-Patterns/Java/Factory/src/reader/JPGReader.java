package reader;

import image.AbstractImage;
import image.Jpg;
public class JPGReader implements ImageReader {

    public JPGReader(){
    
    }

    public AbstractImage  getDecodedImage( int[] image ) {
        return new Jpg( image );
    }

}
