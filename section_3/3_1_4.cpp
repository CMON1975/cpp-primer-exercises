// Rewrite the exercise 2_41_1.cpp with appropriate `using` declarations.
#include <iostream>
#include <string>
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
    Sales_data data1;
    // read ISBN, number of copies sold, and sales price for each transaction
    while (cin >> data1.bookNo >> data1.units_sold >> data1.revenue)
    {
        // write ISBN, number of copies sold, total revenue, and price for each transaction
        cout << data1.bookNo << " " << data1.units_sold << " " << data1.revenue << endl;
    }
    return 0;
}