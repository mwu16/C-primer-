#include <iostream>
#include "Sales_item.h"

int main() {

    Sales_item item1;
    Sales_item item2;
    std::cout << "Enter several ISBN information" << std::endl;
    int count=1;
   if (std::cin >>item1){
    while(std::cin >>item2) {
        if (item1.isbn()==item2.isbn()) {
            item1+=item2;
            count++;            
            }
        else {
            std::cout << item1.isbn() << " has " << count << " information" << std::endl;
            item1=item2;
            count=1;
        }
    }}
    else {
        std::cout << "No valid data"<< std::endl;
    }
    return 0;
}