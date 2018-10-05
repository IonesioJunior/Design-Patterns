package Factories;

public class FactoryProducer {
    public static AbstractFactory getFactory(String factoryType){
        AbstractFactory selectedFactory = null;
        if(factoryType.equalsIgnoreCase("SHAPE")){
            selectedFactory = new ShapeFactory();
        }else if(factoryType.equalsIgnoreCase("COLOR")){
            selectedFactory = new ColorFactory();
        }
        return selectedFactory;
    }
}
