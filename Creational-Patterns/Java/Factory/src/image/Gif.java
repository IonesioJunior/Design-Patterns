package image;

import image.AbstractImage;


public class Gif extends AbstractImage {

    public Gif(int[] pixels){
        this.setPixelsValue(pixels);
    }
    
    public String getImageType(){
        return "Gif Image";
    }
    
}
