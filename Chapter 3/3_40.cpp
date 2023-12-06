#include <iostream>
#include <cstring>
int main() {
    const int sz=80;
    char str1[sz], str2[sz];
    char longstr[sz*2];
    std::cout<< "Enter two words" << std::endl;
    std::cin>> str1 >> str2;
    strcpy(longstr, str1);
    strcat(longstr, " ");
    strcat(longstr, str2);
    std::cout << longstr << std::endl;
    return 0;
}