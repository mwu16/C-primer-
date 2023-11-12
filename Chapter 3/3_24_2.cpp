#include <iostream>
#include <string>
#include <vector>

int main() {
    std::cout << "Enter some numbers" << std::endl;
    std::vector<int> vInt;
    int num;
    while(std::cin >>num) {
        vInt.push_back(num);
    }

    if (vInt.begin()==vInt.end()){
        std::cout << "No number" << std::endl;
        return -1;
    }

    auto beg=vInt.begin();
    auto end=vInt.end();
    auto mid = vInt.begin() + (end-beg)/2;


    for (auto it = vInt.begin(); it < mid; ++it){
        auto last = end-1-(it-vInt.begin());
        std::cout << (*it + *last) << std::endl;
    }

    if (vInt.size()%2!=0){
        std::cout << *mid << std::endl;
    }



    return 0;
}