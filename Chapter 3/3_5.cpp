#include <iostream>
#include <string>


int main() {
    std::string line;
    std::string outline;
    while(std::cin>> line) {
        outline+=line;
    }

    std::cout << outline << std::endl;
    return 0;
}