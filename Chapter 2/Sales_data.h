#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>
struct Sales_data{
    std::string BookNo;
    unsigned units_sale=0;
    double revenue;
};
#endif
