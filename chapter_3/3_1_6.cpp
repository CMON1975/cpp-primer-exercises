// Rewrite the exercise 2_42_3.cpp with appropriate `using` declarations.
#include <iostream>
#include <string>
using std::cerr;
using std::cin;
using std::cout;
using std::endl;
using std::string;

struct Sales_data
{
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

int main()
{
    Sales_data total; // variable to hold the running sum
    double price;     // variable to hold the price for each transaction

    if (cin >> total.bookNo >> total.units_sold >> price)
    {
        total.revenue = total.units_sold * price;

        Sales_data trans; // variable to hold the next transaction
        while (cin >> trans.bookNo >> trans.units_sold >> price)
        {
            trans.revenue = trans.units_sold * price;
            if (total.bookNo == trans.bookNo)
            {
                total.units_sold += trans.units_sold;
                total.revenue += trans.revenue;
            }
            else
            {
                cout << "ISBN: " << total.bookNo << " Units sold: " << total.units_sold << " Revenue: " << total.revenue << endl;
                total = trans; // reset total to current transaction
            }
        }
        cout << "ISBN: " << total.bookNo << " Units sold: " << total.units_sold << " Revenue: " << total.revenue << endl;
    }
    else
    {
        cerr << "No data?!" << endl;
        return -1;
    }
    return 0;
}