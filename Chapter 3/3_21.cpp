#include <iostream>
#include <string>
#include <vector>

int main(){
    std::vector<int> v1;
    std::vector<int> v2(10);
    std::vector<int> v3(10, 42);
    std::vector<int> v4{10};
    std::vector<int> v5{10, 42};
    std::vector<std::string> v6{10};
    std::vector<std::string> v7{10, "hi"};

    std::cout << "v1" << std::endl;
    for (std::vector<int>::iterator it= v1.begin(); it!=v1.end(); ++it)
        std::cout << *it << " ";
    std::cout<< std::endl;
    std::cout << "v2" << std::endl;
    for (std::vector<int>::iterator it= v2.begin(); it!=v2.end(); ++it)
        std::cout << *it << " ";
    std::cout<< std::endl;
    std::cout << "v3" << std::endl;
    for (std::vector<int>::iterator it = v3.begin(); it!=v3.end(); ++it) 
        std::cout<<*it << " ";
    std::cout<< std::endl;
    std::cout << "v4" <<std::endl;
    for (std::vector<int>::iterator it =v4.begin(); it !=v4.end(); ++it)
        std::cout <<*it <<" ";
    std::cout<< std::endl;
    std::cout << "v5" << std::endl;
    for (std::vector<int>::iterator it= v5.begin(); it !=v5.end(); ++it)
        std::cout << *it << " ";
    std::cout<< std::endl;
    std::cout << "v6" << std::endl;
    for (std::vector<std::string>::iterator it = v6.begin(); it!=v6.end(); ++it)
        std::cout << *it << " ";
    std::cout<< std::endl;
    std::cout << "v7" << std::endl;
    for (std::vector<std::string>::iterator it = v7.begin(); it!=v7.end(); ++it)
        std::cout << *it << " ";
    std::cout<< std::endl;



    return 0;
}