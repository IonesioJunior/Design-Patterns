package Factories;

import Color.Blue;
import Color.Color;
import Color.Green;
import Color.Red;
import Shape.Shape;

public class ColorFactory extends AbstractFactory 
{
    @Override
    public Shape getShape(String shapeType){
        return null;
    }


    @Override
    public Color getColor(String colorType){
        if (colorType == null)
        {
            return null;
        }

        Color selectedColor = null;
        if(colorType.equalsIgnoreCase("RED")){
            selectedColor = new Red();
        }else if ( colorType.equalsIgnoreCase("BLUE") ){
            selectedColor = new Blue();
        }else if( colorType.equalsIgnoreCase("GREEN") ){
            selectedColor = new Green();
        }

        return selectedColor;
    }
}
