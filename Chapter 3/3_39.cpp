#include <iostream>
#include <cstring>

int main() {
    const int sz=80;
    char str1[sz], str2[sz];
    std::cout << "Enter two string:" << std::endl;
    std::cin >> str1 >> str2;
    auto result = strcmp(str1, str2);
    switch (result)
    {
    case 1:
        std::cout << "First string longer than the second string" << std::endl;
        break;
    case -1:
        std::cout << "Second string longer than the first string" << std::endl;
        break;
    case 0:
        std::cout << "Two strings have same length" << std::endl;    
        break;
    default:
        std::cout << "No defined error" << std::endl;
        break;
    }
    return 0;

}