#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

int main() {
    std::vector<int> v2;
    std::srand( (unsigned)time(NULL) );

    for (int i=0; i<10; i++) {
        int e=std::rand()/1000;
        v2.push_back(e);
        std::cout << e << " ";
    }
    std::cout << std::endl;

    for (std::vector<int>::iterator it= v2.begin(); it != v2.end(); ++it){
        *it*=2;
        std::cout << *it << " ";
    }
    std::cout<<std::endl;

    return 0;
}