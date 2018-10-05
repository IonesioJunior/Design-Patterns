package Factories;

import Color.Color;
import Shape.Circle;
import Shape.Rectangle;
import Shape.Shape;
import Shape.Square;

public class ShapeFactory extends AbstractFactory 
{
    @Override
    public Shape getShape(String shapeType){
        if(shapeType == null || shapeType == "")
        {
            return null;
        }
        
        Shape selectedShape = null;
        if( shapeType.equalsIgnoreCase("CIRCLE") ){
            selectedShape = new Circle();
        }else if( shapeType.equalsIgnoreCase("Square") ){
            selectedShape = new Square();
        }else if( shapeType.equalsIgnoreCase("Rectangle") ){
            selectedShape = new Rectangle(); 
        }
        return selectedShape;
    }

    @Override
    public Color getColor(String colorType)
    {
        return null;
    }
}
