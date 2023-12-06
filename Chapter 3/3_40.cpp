#include <iostream>
#include <cstring>
int main() {
    char str1[]="Welcome to Sweden";
    char str2[]="Welcome to China";
    char longstr[strlen(str1) + strlen(str2) - 1];
    strcpy(longstr, str1);
    strcat(longstr, " ");
    strcat(longstr, str2);
    std::cout << longstr << std::endl;
    return 0;
}