#include <iostream>
#include <map>

// To compile: g++ map.cpp -std=c++11
int main() {
    // Map Inititalizations
    // std::map<int, int> intMap { ... } also works
    std::map<int, int> intMap = {
        // Inserting keys in a random order
        {4, 40},
        {2, 20},
        {5, 50},
        {3, 30},
        {1, 10}
    };

    // Iterator initializations
    std::map<int, int>::iterator iterator;
    std::map<int, int>::reverse_iterator revItrerator;

    // Iterating over a map
    // != in contrast to < 
    for (iterator = intMap.begin(); iterator != intMap.end(); iterator++) {
        // Note all keys are sorted
        std::cout << iterator->first << " \t " << iterator->second << std::endl;
        // std::cout << (*iterator).first << " \t " << (*iterator).second << std::endl;
    }

    std::cout << "Reverse Iteratoration" << std::endl;
    for (revItrerator = intMap.rbegin(); revItrerator != intMap.rend(); ++revItrerator) {
        std::cout << revItrerator->first << "\t" << revItrerator->second << std::endl;
    }
    return 0;
}