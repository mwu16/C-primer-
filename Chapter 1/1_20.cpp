#include <iostream>
#include "Sales_item.h"

int main(){
    Sales_item items;
    while(std::cin >> items){
        std::cout << items << std::endl;
    }

    return 0;
}