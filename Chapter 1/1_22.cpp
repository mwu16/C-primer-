#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item item;
    Sales_item item_total;
    while(std::cin>> item) {
        item_total+=item;
    }
    std::cout << item_total << std::endl;
    return 0;
}