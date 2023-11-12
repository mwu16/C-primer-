#include <iostream>
#include <vector>

int main(){
    const int sz=10;
    unsigned array[sz];
    for (int index=0; index < sz; ++index) {
        array[index]=index;
        std::cout << array[index]<< " ";
    }
    std::cout << std::endl;

    unsigned array_copy[sz];
    for (int index=0; index<sz; ++index) {
        array_copy[index]=array[index];
    }
    for (auto e:array_copy) {
        std::cout << e << " ";
    }
    std::cout<<std::endl;

    std::vector <int> vInt(10);
    for (decltype(vInt.size()) index=0; index<vInt.size(); ++index) {
        vInt[index]=index;
    }
      for (auto e:vInt) {
        std::cout << e << " ";
    }
    std::cout<<std::endl;

    std::vector<int> vInt_copy=vInt;

    for (auto e:vInt){
       std::cout << e << " ";
    }
    std::cout<<std::endl;
    return 0;
}