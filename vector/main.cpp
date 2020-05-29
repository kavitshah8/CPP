#include <vector>
#include <iostream>
#include <algorithm>

// Compile using: g++ main.cpp -std=c++0x

int main() {
    std::vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    for_each(v.begin(), v.end(), [](int j) { 
        std::cout << j << ","; 
    }); 
    
    // for_each(v.begin(), v.end(), [](int i) {
    //     std::cout << i << std::endl;
    // });

    return 0;
}
