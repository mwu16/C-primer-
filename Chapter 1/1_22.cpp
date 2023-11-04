#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item item;
    Sales_item item_total;
    std::cout << "Enter some same ISBM information" << std::endl;
    if (std::cin >> item)
        while(std::cin>> item_total) {
            if (compareIsbn(item, item_total))
                item+=item_total;
            else 
            std::cout << "ISBN different" << std::endl;
            return -1;
    }
    else {
        std::cout << "No valid ISBN information" << std::endl;
        return -1;
    }
    std::cout << item_total << std::endl;
    return 0;
}