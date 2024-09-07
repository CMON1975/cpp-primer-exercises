#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item total; // variable to hold the running sum
    if (std::cin >> total)
    {                     // read the first transaction
        Sales_item trans; // variable to hold the next transaction
        while (std::cin >> trans)
        { // read the rest of the transactions
            if (total.isbn() == trans.isbn())
            {                   // check if the ISBNs are the same
                total += trans; // update the running total
            }
            else
            {
                // print the current total and reset it to the next book
                std::cout << total << std::endl;
                total = trans; // reset total to the current transaction
            }
        }
        std::cout << total << std::endl; // print the last transaction's total
    }
    else
    {
        // no input! warn the user
        std::cerr << "No data?!" << std::endl;
        return -1; // indicate failure
    }
    return 0;
}
