#include <iostream>

int main(){
    std::cout << "Enter two numbers: " << std::endl;
    int v1=0, v2=0;
    std::cin >> v1 >> v2;
    float middle=(v1+v2)/2;
    if (v1<=middle){
        while(v1<=v2){
            std::cout << v1++ << std::endl;
        }
    } else {
        while (v1>=v2){
            std::cout << v2++ << std::endl;
        }
    }

    return 0;


}