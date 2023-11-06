#include<string>
#include<iostream>



struct Sales_data{
    std::string BookNo;
    unsigned units_sale=0;
    double revenue;
};

int main() {

    Sales_data book1, book2;
    double price;
    std::cin>>book1.BookNo>>book1.units_sale>>price;
    book1.revenue=price*book1.units_sale;

    std::cin>>book2.BookNo>>book2.units_sale>>price;
    book2.revenue=price*book2.units_sale;

    if (book1.BookNo==book2.BookNo) {
        unsigned totalCnt=book1.units_sale+book2.units_sale;
        double totalRevenue=book1.revenue+ book2.revenue;
        double mean_price=totalRevenue/totalCnt;
        std::cout << book1.BookNo << " "<<totalCnt<< " "<< totalRevenue << " ";
        if (totalCnt!=0) {
            std::cout << "mean price " << mean_price <<std::endl; 
        } else {
            std::cout << "No sales" << std::endl;
        }
    } else {
        std::cerr << "Book No must use the same ISBN" << std::endl;
        return -1;
    }
   
   return 0;

}