

/**
* @author : Ionésio Junior
* Descrption : This code implements and uses Factory Pattern 
*/

import factory.ImageFactory;
import image.AbstractImage;

public class App {

    public static void main(String[] args) {
    	ImageFactory factory = new ImageFactory();
		
		int[] gifPixels = {3,5,6,8,9,7,4,2,1,0};
		AbstractImage img = factory.readImage( gifPixels , "gif");

		System.out.println( img.getImageType() );
		
		int[] jpgPixels = {6,8,7,6,5,4,2,6,5,8,6,9};
		img = factory.readImage( jpgPixels, "jpg");
		System.out.println( img.getImageType() );
		
	}
}
