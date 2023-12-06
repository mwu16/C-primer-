#include <iostream>
#include <vector>
#include <ctime>

int main() {
    const int sz=10;
    std::vector<int> ivec;
    std::srand ((unsigned) time (NULL));
    for (int i=0; i!= sz; i++) {
        ivec.push_back(std::rand()%100); //int between 0 to 100;
    }
    auto it = ivec.cbegin();
    int list1[ivec.size()];
    for (auto &e: list1){
        e=*it;
        std::cout << e <<std::endl;
        it++;
    }

    std::cout<<std::endl;
    return 0;

}
