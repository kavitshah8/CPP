#include <iostream>
#include "Cube.h"

Cube::Cube() {
    std::cout<<"Custom constructor was invoked." << std::endl;
}

Cube::Cube(int length) {
    _length = length;
    std::cout << "One paramenter constructor was invoked." << std::endl;
}

Cube::Cube(const Cube& obj) {
    _length = obj._length;
    std::cout << "Copy constructor was invoked." << std::endl;
}

const Cube& Cube::operator=(const Cube & obj) {
    _length = obj._length;
    std::cout << "Assignment operator was invoked." << std::endl;
    return *this;
}

Cube::~Cube() {
    std::cout<<"Destructor was invoked."<<std::endl;
}

int Cube::getVolunme() {
    return _length * _length * _length; 
}