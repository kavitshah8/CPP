#include <iostream>
#include "List.h"

int main() {
    List<int> list;
    const int t = 2;
    list.insertAtFront(2);
    list.insertAtFront(3);
    list.insertAtFront(4);
    std::cout << list[0] << std::endl;
    std::cout << list[1] << std::endl;
    std::cout << list[2] << std::endl;
}