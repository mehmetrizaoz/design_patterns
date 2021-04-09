#ifndef SHAPE_FACTORY_H
#define SHAPE_FACTORY_H

#include "Shape.h"
#include <string>

using namespace std;

class ShapeFactory{
public:
    Shape *getShape(string shapeType);
};

#endif