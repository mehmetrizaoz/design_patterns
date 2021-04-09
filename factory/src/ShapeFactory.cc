#include "ShapeFactory.h"
#include <iostream>
#include <string>
#include "Circle.h"
#include "Square.h"
#include "Rectangle.h"

using namespace std;

Shape *ShapeFactory::getShape(string shapeType){
    if(shapeType == ""){
        return nullptr;
    }		
    if(shapeType == "CIRCLE"){
        return new Circle();
        
    } else if(shapeType == "RECTANGLE"){
        return new Rectangle();
        
    } else if(shapeType == "SQUARE"){
        return new Square();
    }
    
    return nullptr;
}
