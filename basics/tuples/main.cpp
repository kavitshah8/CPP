#include <iostream>
#include <tuple>
using namespace std;

// To comipe: g++ main.cpp -std=c++11
int main() {

    tuple <int, int, int> node;
    node = make_tuple(1, 2, 3);
    std::cout << get<0>(node) << std::endl;
    std::cout << get<1>(node) << std::endl;
    std::cout << get<2>(node) << std::endl;
    return 0;
}