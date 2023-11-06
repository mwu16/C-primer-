#include<iostream>
#include<string>

int main() {

std::cout << "Enter one sentence:" << std::endl;
    //std::string line;
    //while(getline(std::cin, line)){
      //  std::cout<<line<<std::endl;
   // }

    std::string word;
    while(std::cin >> word) {
        std::cout<<word<<std::endl;
    }
    return 0;
}