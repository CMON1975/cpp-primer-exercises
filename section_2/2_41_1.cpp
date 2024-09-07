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
    Sales_data data1;
    // read ISBN, number of copies sold, and sales price for each transaction
    while (std::cin >> data1.bookNo >> data1.units_sold >> data1.revenue)
    {
        // write ISBN, number of copies sold, total revenue, and price for each transaction
        std::cout << data1.bookNo << " " << data1.units_sold << " " << data1.revenue << std::endl;
    }
    return 0;
}