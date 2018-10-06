package image;

import image.AbstractImage;


public class Jpg extends AbstractImage {

    public Jpg( int[] pixels){
        this.setPixelsValue(pixels);
    }
    
    public String getImageType(){   
        return "JPG Image";
    }
    
}
