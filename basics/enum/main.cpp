#include <stdio.h>
#include <iostream>

int main() {
    enum class Gender {Male, Female};
    Gender g = Gender::Male;
    std::cout << (g == Gender::Male) << std::endl;
    return 0;
}