#include <iostream>
#include <string>

int main() {
    std::cout << "Enter a sentence with punct" << std::endl;
    std::string line;
    std::getline(std::cin, line);
    std::string s(line);
    std::string outline;
    for (decltype(s.size()) index=0;
    index !=s.size(); ++index)
        if (!ispunct(s[index]))
            outline+=s[index];
    
    std::cout << outline << std::endl;
    return 0;
}