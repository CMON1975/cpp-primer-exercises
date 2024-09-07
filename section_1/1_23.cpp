#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item total; // variable to hold the running sum
    int count = 0;    // variable to hold the count of transactions for the current ISBN

    if (std::cin >> total)
    { // read the first transaction
        count = 1;
        Sales_item trans; // variable to hold the next transaction
        while (std::cin >> trans)
        { // read the rest of the transactions
            if (total.isbn() == trans.isbn())
            {                   // check if the ISBNs are the same
                total += trans; // update the running total
                ++count;        // increment the transaction count
            }
            else
            {
                // print the current total and the transaction count
                std::cout << "ISBN: " << total.isbn() << std::endl;
                std::cout << "Total Sales: " << total << std::endl;
                std::cout << "Number of Transactions: " << count << std::endl;
                std::cout << "-----------------------------" << std::endl;

                total = trans; // reset total to the current transaction
                count = 1;     // reset the transaction count
            }
        }
        // print the last ISBN's total and transaction count
        std::cout << "ISBN: " << total.isbn() << std::endl;
        std::cout << "Total Sales: " << total << std::endl;
        std::cout << "Number of Transactions: " << count << std::endl;
    }
    else
    {
        // no input! warn the user
        std::cerr << "No data?!" << std::endl;
        return -1; // indicate failure
    }
    return 0;
}
