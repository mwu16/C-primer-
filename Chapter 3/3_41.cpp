#include <iostream>
#include <vector>
#include <ctime>

int main() {
    const int sz=8;
    int list1[10];
    std::srand((unsigned) time(NULL));
    for (int i=0; i<sz; i++){
        list1[i]=std::rand()%100; //int 0 to 100
    }
    std::vector<int> ivec(std::begin(list1), std::end(list1));
    for (decltype(ivec.size()) i=0; i<ivec.size(); i++){
        std::cout << ivec[i] << std::endl;
    }
    std::cout<<std::endl;
    return 0;
}