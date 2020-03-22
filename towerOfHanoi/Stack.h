#pragma once
#include "Cube.h"
#include <vector>

class Stack {
    public:
        void push_back(Cube & cube);
        Cube removeTop();
        Cube & peekTop();
        // ? what's extra const means
        unsigned size() const;

        friend std::ostream& operator<<(std::ostream & os, const Stack & stack);
    private:
        std::vector<Cube> cubes_;
};