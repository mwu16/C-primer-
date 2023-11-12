#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<int> v2={13,45,67,89,90,23,34,25,26,37};

    for (std::vector<int>::iterator it= v2.begin(); it != v2.end(); ++it)
        *it=*it*2;
    for (auto e: v2)
        std::cout << e << " ";
    std::cout<<std::endl;

    return 0;
}