#include <vector>
#include <iostream>
#include <algorithm>

int main() {
    std::vector<int> v = {7, 5, 16, 8};

    for (auto& it: v) { 
        std::cout << it << ","; 
    }

    for (auto it: v) { 
        std::cout << it << ","; 
    }   

    for_each(v.begin(), v.end(), [](int i) {
        std::cout << i << std::endl;
    });

    return 0;
}
