#include <iostream>
#include <map>

// To compile: g++ map.cpp -std=c++11
int main() {
    std::map<int, int> intMap = {
        {1, 10},
        {2, 20},
        {3, 30},
        {4, 40},
        {5, 50}
    };

    // Both syntax work
    // std::map<int, int> intMap {
    //     {1, 10},
    //     {2, 20},
    //     {3, 30},
    //     {4, 40},
    //     {5, 50}
    // };

    std::map<int, int>::iterator itr;

    for(itr = intMap.begin(); itr != intMap.end(); itr++) {
        std::cout << itr->first << " \t " << itr->second << std::endl;
    }
    return 0;
}