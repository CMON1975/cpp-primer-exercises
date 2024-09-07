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
    Sales_data total; // variable to hold the running sum
    double price;     // variable to hold the price for each transaction

    if (std::cin >> total.bookNo >> total.units_sold >> price)
    {
        total.revenue = total.units_sold * price;

        Sales_data trans; // variable to hold the next transaction
        while (std::cin >> trans.bookNo >> trans.units_sold >> price)
        {
            trans.revenue = trans.units_sold * price;
            if (total.bookNo == trans.bookNo)
            {
                total.units_sold += trans.units_sold;
                total.revenue += trans.revenue;
            }
            else
            {
                std::cout << "ISBN: " << total.bookNo << " Units sold: " << total.units_sold << " Revenue: " << total.revenue << std::endl;
                total = trans; // reset total to current transaction
            }
        }
        std::cout << "ISBN: " << total.bookNo << " Units sold: " << total.units_sold << " Revenue: " << total.revenue << std::endl;
    }
    else
    {
        std::cerr << "No data?!" << std::endl;
        return -1;
    }
    return 0;
}