#include <iostream>
#include <vector>

int main(){
    std::cout << "Enter a number" << std::endl;
    int num;
    std::vector<int> v1;
    std::string n="y";
    while (std::cin>>num){
        v1.push_back(num);
        std::cout << "continue?" << std::endl;
        if (n!="y" || n!="Y"){
            break;
        }
    }
    return 0;
}