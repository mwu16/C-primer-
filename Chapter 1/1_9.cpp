#include <iostream>

int main(){
    int n=50, var=0;
    while (n<=100) {
        var += n;
        n++;
    }
    std::cout <<"sum of the number from 50 to 100 is " <<var << std::endl;
    return 0;
}