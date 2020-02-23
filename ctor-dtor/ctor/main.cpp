#include "../Cube.h"
#include <iostream>

bool sendCube(Cube cube) {
    std::cout <<"Inside sendCube()" << std::endl;
    std::cout <<"Returning from sendCube()" << std::endl;
    return true;
}

bool sendCube(const Cube* c){
    return true;
}

bool sendCubeByReference(const Cube &c) {
    return true;
}

Cube bar() {
    std::cout <<"Inside bar()" << std::endl;
    Cube a(10);
    std::cout <<"Returning from bar()" << std::endl;
    return a;
}

int main () {
    // Custom constructor was called.
    Cube a;
    // Custome copy constructor was called.
    Cube b = a;
    // Custom constructor was called.
    Cube x;
    // Custome assignment operator was called.
    // Note: no object oncstruction was needed.
    x = b;

    // Custom one paramenter constructor was called
    Cube c(10);
    // Custome copy constructor was called
    Cube d = c;
    // No costructor will be called, only an alias will be created
    Cube &e = d; // By Reference
    // No costructor will be called
    Cube *f = &d; // By Pointer

    // Copy ctor will be called as it c has to be copied into sendCube's stack frame
    sendCube(c); // Pass By Value
    // No constructor will be called as we are passing an alias of an instance
    sendCubeByReference(c); // Pass by reference
    // No constructor will be called as we are passing a pointer to an instance
    sendCube(&c); // Pass by pointer

    // Copy ctor will be called as returned obj from bar has to be copied onto main's stack frame
    // Ideally, one, copy, copy ctor should be called  
    // Note: some how it does not call copy ???
    Cube i = bar();

    return 0;
}