#include <iostream>
int main(){
    std::cout << "Enter two numbers: "<< std::endl;
    int v1=0, v2=0;
    std::cin >> v1 >>v2;
    int middle = (v1+v2)/2;
    if (v1<=middle){
        for (int i=v1; i <= v2; i++){
            std::cout << i << std::endl;
        }
    } else {
        for (int i=v2; i<=v1; i++){
            std::cout << i << std::endl;
        }
    }
    return 0;
}