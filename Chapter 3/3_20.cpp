#include <iostream>
#include <vector>

int main(){
    std::cout << "Enter numbers" << std::endl;
    int num;
    std::vector<int> vInt;
    while(std::cin >> num) {
        vInt.push_back(num);
    }
    if (!vInt.empty()) {
    int num1=vInt[0];
    if (vInt.size()==1) {
        std::cout << num1 <<std::endl;
    } else {
         int num2;
        for (decltype(vInt.size()) index=0;
        index < vInt.size()-1; ++index) {
            num2=vInt[index+1];
            std::cout << num1+num2 << std::endl;
            num1=num2;
    }
    }
    } else {
        std::cout << "No interger" << std::endl;
    }
    return 0;
}