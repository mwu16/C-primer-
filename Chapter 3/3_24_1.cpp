#include <iostream>
#include <string>
#include <vector>

int main() {
    std::cout << "Enter some number" << std::endl;
    std::vector<int> vInt;
    int num;

    while(std::cin>> num) {
        vInt.push_back(num);
    }

    if (vInt.begin()==vInt.end()){
        std::cout << " no number" << std::endl;
        return -1;
    }

    if (vInt.begin()==vInt.end()-1){
        std::cout << *(vInt.begin()) << std::endl;
        return 0;
    }


    for(auto it=vInt.begin(); it!=vInt.end()-1; it++)
    {   auto it2 = it+1; 
        std::cout << *(it) + *(it2) << " ";
        if ((it-vInt.begin()+1)%10==0) {
            std::cout << std::endl;
        }
    }    
    return 0;
}