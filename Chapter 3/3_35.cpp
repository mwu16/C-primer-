#include <iostream>

int main() {
    const int sz=10;
    int a1[10];
    for (int i=0; i< sz; ++i){
        a1[i]=i;
        std::cout << i << " ";
    }
    std::cout << std::endl;

    auto *p=a1;
    int *pbeg=std::begin(a1);
    int *pend=std::end(a1);

    while(pbeg!=pend) {
        *p=0;
        p+=1;
    }

    for (auto a:a1) {
        std::cout << a << " ";
    }
    std::cout << std::endl;
    return 0;
}