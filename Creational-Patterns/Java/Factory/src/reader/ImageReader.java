package reader;

import image.AbstractImage;

public interface ImageReader {
    
    public AbstractImage getDecodedImage( int[] image );
}
