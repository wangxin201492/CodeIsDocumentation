#include <iostream>
#include <set>

int main() {
    std::set<long long> s1 = {10,2,3,7,6};
    std::cout << 1 << std::endl;
    for (auto i : s1) {
        std::cout << i << std::endl;
    }
}