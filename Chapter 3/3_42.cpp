#include <iostream>
#include <vector>
#include <ctime>

int main() {
    const int sz=10;
    std::vector<int> ivec;
    int list1[sz];
    std::srand ((unsigned) time (NULL));
    for (int i=0; i< sz; i++) {
        ivec.push_back(std::rand()/100);
    }
    for (int i=0; i<sz; i++){
        list1[i]=ivec[i];
        std::cout << list1[i] <<std::endl;
    }

    std::cout<<std::endl;
    return 0;

}
