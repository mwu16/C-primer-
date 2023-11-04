#include <iostream>
#include "Sales_item.h"


int main() {
    
    Sales_item item1, item2;
    std::cout << "Enter two same ISBN sales information: " << std::endl;
    std::cin >> item1 >> item2;
    if (compareIsbn(item1, item2))
        std::cout << item1 + item2 << std::endl;
    else
        std::cout << "Enter two different ISBM sales information" << std::endl;
    return 0;
}