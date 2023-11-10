#include <iostream>
#include <vector>

int main(){
    std::cout << "Enter some number" << std::endl;
    std::vector<int> vInt;
    int num;
    while (std::cin >> num) {
        vInt.push_back(num);
    }
    if (!vInt.empty()){
        for (decltype(vInt.size()) index=0;
        index < vInt.size()/2; ++index)
        std::cout << vInt[index]+ vInt[vInt.size()-1-index] << std::endl;
        if (vInt.size()%2 !=0) {
            std::cout << vInt[vInt.size()/2] << std::endl;
        }
    } else {
        std::cout << "No number entered" << std::endl;
    }


    return 0;
}