package image;


public abstract class AbstractImage {
    private int[] pixels;

    public abstract String getImageType();
    
    public int[] getPixels(){
        return this.pixels;
    }
    
    public void setPixelsValue(int[] pixels){   
        this.pixels = pixels;
    }
}
