// Use your `Sales_data` class to rewrite the exercises from 1_20.cpp, 1_21.cpp, 1_22.cpp, 1_23.cpp, and 1_25.cpp
// For now, you should define your `Sales_data` class in the same file as your `main` function.
#include <iostream>
#include <string>

struct Sales_data
{
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

int main()
{
    Sales_data data1, data2;
    std::cin >> data1.revenue >> data2.revenue;              // read a pair of transactions
    std::cout << data1.revenue + data2.revenue << std::endl; // print their sum
    return 0;
}