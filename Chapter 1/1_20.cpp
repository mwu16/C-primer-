#include <iostream>
#include "Sales_item.h"

int main(){
    Sales_item items;
    std::cout << "Enter Book Items " << std::endl;
    while(std::cin >> items){
        std::cout << "ISBM, number of sales, total income, mean price: " 
        << items << std::endl;
    }

    return 0;
}