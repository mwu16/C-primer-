#include <iostream>

int main(){
    int ia[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    for (auto &row:ia){
        for (auto &e: row){
            std::cout << e << std::endl;
        }
    }
    std::cout<<std::endl;
    for (int i=0;i!=3; i++){
        for (int j=0; j!=4;j++){
            std::cout << ia[i][j]<< std::endl;
        }
    }
    std::cout<<std::endl;
    for (auto *p=ia; p!=ia+3;p++){
        for (auto q=*p; q!=*p+4; q++){
            std::cout << *q << std::endl;
        }
    }
    std::cout<<std::endl;
    return 0;
}