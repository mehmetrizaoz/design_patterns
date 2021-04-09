#include "ShapeFactory.h"
#include <iostream>
#include <string>
#include "Circle.h"
#include "Square.h"
#include "Shape.h"
#include "Rectangle.h"

using namespace std;

int main(){
   ShapeFactory *shapeFactory = new ShapeFactory();
   Shape *shape1 = shapeFactory->getShape("CIRCLE");
   shape1->draw();

   Shape *shape2 = shapeFactory->getShape("RECTANGLE");
   shape2->draw();
   
   Shape *shape3 = shapeFactory->getShape("SQUARE");
   shape3->draw();

   return 0;
}



