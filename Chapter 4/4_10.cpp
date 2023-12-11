#include <iostream>

int main(){
    int input;
    do{
        std::cout << "Enter a number: "<< std::endl;
        std::cin>>input;
    }
    while(input!=42);
    std::cout<< "the number is equal to 42"<< std::endl;
    return 0;
}