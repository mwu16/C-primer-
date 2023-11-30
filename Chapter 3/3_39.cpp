#include <iostream>
#include <string>

int main() {
    std::string str1, str2;
    std::cout << "Enter two strings" << std::endl;
    std::cin >> str1 >> str2;
    if (str1 > str2) {
        std::cout << "first string longer than second string" << std::endl;
    } else if (str1 < str2) {
        std::cout << "first string shorter than the second string" << std::endl;
    } else {
        std::cout << "two strings are equal" << std::endl;
    }
    return 0;
}