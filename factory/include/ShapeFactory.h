#pragma once

#include "Shape.h"
#include <string>

using namespace std;

class ShapeFactory{
public:
    Shape *getShape(string shapeType);
};

