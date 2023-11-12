#include <iostream>

int main(){

    unsigned array[10];
    for (int index=0; index < 10; ++index) {
        array[index]=index;
        std::cout << array[index]<< " ";
    }
    std::cout << std::endl;

    return 0;
}