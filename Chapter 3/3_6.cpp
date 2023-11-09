#include <iostream>
#include <string>

int main() {
    std::cout << "Enter one sentence" << std::endl;
    std::string line;
    std::getline(std::cin, line);
    std::string s(line);
    std::string output;
    for (decltype(s.size()) index=0; 
    index !=s.size(); ++index){
        if (isalpha(s[index])){
            s[index]='X';
        }
    }   
        

    std::cout << s << std::endl;
    return 0;
}