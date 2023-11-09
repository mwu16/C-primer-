#include <iostream>
#include <vector>
#include <string>

int main(){
    std::vector<std::string> input;
    std::cout << "Enter one word"<< std::endl;
    std::string word;
    while (std::cin>>word){
            input.push_back(word);
            std::string n;
            std::cout << "Continue?" << std::endl;
            std::cin >> n;
            if (n == "y" || n=="Y") {
                std::cout << "Enter one word"<< std::endl;
            } else {
                break;
            }
    }
    for(auto c: input){
        std::cout<< c << " ";
    }
    std::cout<<std::endl;
    return 0;
}
