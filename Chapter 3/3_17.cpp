#include <iostream>
#include <string>
#include <vector>

int main(){
    std::cout << "Enter some words: " << std::endl;
    std::string word;
    std::vector<std::string> v;
    while(std::cin >> word){
        std::string s(word);
        for (decltype(s.size()) index=0; index < s.size(); ++index) {
            s[index]=toupper(s[index]);
        }
        v.push_back(s);
    }

    for (auto c: v){
        std::cout << c << std::endl;
    }
    return 0;
}