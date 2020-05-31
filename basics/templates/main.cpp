#include <iostream>

template <typename T>
T max(T a, T b) {
    return a > b ? a : b;
}

int main() {
    int a = 50, b = 6;
    const char* c = "C", *d = "D";
    std::cout << "Max is = " << max(a, b) << std::endl;
    std::cout << "Max is = " << max(c, d) << std::endl;
}