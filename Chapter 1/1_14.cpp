#include <iostream>

int main() {
    std::cout <<"Enter numbers: "<< std::endl;
   int sum=0, value=0;
   while(std::cin >> value){
       sum+=value;
   } 
   std::cout << "Sum is: " << sum <<std::endl;
   return 0;
}