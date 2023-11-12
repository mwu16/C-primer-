#include <iostream>

int main(){
    const int sz=10;
    unsigned array[sz];
    for (int index=0; index < sz; ++index) {
        array[index]=index;
        std::cout << array[index]<< " ";
    }
    std::cout << std::endl;

    return 0;
}