#include <iostream>
int main() {
    int sum=0;
    for (int var=-100; var<=100; var++){
        sum+=var;
    }
    std::cout << "sum of -100 to 100 is " << sum <<std::endl; 
    return 0;
}