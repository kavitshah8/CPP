#include "cube.cpp"

int main() {
    shape::Cube c;
    c.setLength(3);
    std::cout << c.getArea() << std::endl;
    return 0;
}