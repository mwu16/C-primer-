#include <iostream>
#include <string>
#include <vector>

int main() {
    std::cout << "Enter text" << std::endl;
    std::vector<std::string> vString;
    std::string word;
    while(std::getline(std::cin, word)) {
        vString.push_back(word);
    }
    for (std::vector<std::string>::iterator it=vString.begin(); it!=vString.end() && !(*it).empty(); ++it) {
        for (auto it2=(*it).begin(); it2 != (*it).end(); it2++)
            *it2=std::toupper(*it2);
        std::cout << *it << std::endl;       
    }
    return 0;
}