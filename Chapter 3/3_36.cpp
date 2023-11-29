#include <iostream>
#include <string>
#include <vector>
#include <ctime>

int main() {
    const int sz=10;
    int a[sz], b[sz];
    srand((unsigned) time (NULL));
    for (int i=0; i<sz; i++){
        a[i]=rand()%10;
    }

    std::cout << "Enter 10 values" << std::endl;
    int iPut;
    for (int i=0; i<sz; i++) {
        if(std::cin >> iPut)
        b[i]=iPut;
    }

    std::cout << "System generated values" << std::endl;
    for (auto e: a){
        std::cout << e << " ";
    }
    std::cout << std::endl;
    std::cout << "Your input numbers" << std::endl;
    for (auto e: b){
        std::cout << e << " ";
    }
    std::cout << std::endl;

    auto *p = std::begin(a);
    auto *p2= std::begin(b);
    while(p!=std::end(a) && p2!=std::end(b)) {
        if (*p!=*p2) {
            std::cout << " your input is not the same as the generated values" << std::endl;
            return -1;
        } 
        p++;
        p2++;
    }

    std::cout << "your input is the same as the generated values";

    std::vector<int> vInt1(sz);
    std::vector<int> vInt2(sz);

    for (decltype(vInt1.size()) i=0; i< vInt1.size(); ++i) {
        vInt1.push_back(rand()%10);
    }

    std::cout << "Enter 10 values" << std::endl;

    for (decltype(vInt2.size()) i=0; i < vInt2.size(); ++i) {
        if (std::cin >> iPut)
        vInt2.push_back(iPut);
    }

    std::cout << "System generated values" << std::endl;
    for (auto e: vInt1){
        std::cout << e << " ";
    }
    std::cout << std::endl;
    std::cout << "Your input numbers" << std::endl;
    for (auto e: vInt2){
        std::cout << e << " ";
    }
    std::cout << std::endl;

    auto it1 = vInt1.begin();
    auto it2 = vInt2.begin();
    while(it1 != vInt1.end() && it2 !=vInt2.end()) {
        if (*it1!=*it2) {
            std::cout << " your input is not the same as the generated values" << std::endl;
            return -1;
        } 
        it2++;
        it1++;
    }
    return 0; 
}
