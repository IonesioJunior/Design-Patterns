package factory;

import reader.ImageReader;
import reader.GifReader;
import reader.JPGReader;

import image.AbstractImage;

public class ImageFactory {
    
    private  ImageReader reader;
   
    
    public ImageFactory() {
    }
    
    
    public AbstractImage readImage( int[] pixels, String type ){    
        if( type == "gif"){ 
            reader = new GifReader();
        } else if ( type == "jpg"){
            reader = new JPGReader();
        }else{
            return null;
        }
        return reader.getDecodedImage( pixels );
    }
}
