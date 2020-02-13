#include <iostream>
#include "cube.h"

namespace shape {
    void Cube::setLength(double length) {
        _length = length;
    }

    double Cube::getArea() {
        return _length*_length; 
    }
}