// Write your own version of the Sales_data.h header and use it to rewrite the excercise fom 2_41_3.cpp
#include <iostream>
#include "Sales_data.h"

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