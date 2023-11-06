#include <iostream>
#include <string>



int main(){
    std::string line1, line2;
    if (line1.size()==line2.size()) {
        std::cout<< "Line 1 and Line 2 are the same"<< std::endl;
    } else {
       if (line1.size()> line2.size()){
           std::cout << line1 <<std::endl;
       } else {
           std::cout << line2 <<std::endl;
       }
    }
    return 0;
}