#include <iostream>
#include <string>




int main() {
 std::cout << "Enter a number 1: print line by line 2: print word by word"<<std::endl;
 int num;
 std::cin >> num;
 std::string line;
 std::string word;
 switch (num)
 {
 case 1 /* constant-expression */:   
    std::cout << "Print line by line. Please enter a sentence" <<std::endl;
    while (getline(std::cin, line)){
        std::cout << line << std::endl;
    }
     return 0;
 case 2:
 std::cout << "Print word by word, Please enter a sentence" << std::endl;
 while(std::cin >> word) {
     std::cout << word << std::endl;
     return 0;
 }

 default:
 std::cout<<"invalid input"<< std::endl;
     return -1;
 }
}