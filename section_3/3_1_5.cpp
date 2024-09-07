// Rewrite the exercise 2_42.2.cpp, and 2_42_3.cpp with appropriate `using` declarations.
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
    Sales_data data1, data2;
    cin >> data1.revenue >> data2.revenue;         // read a pair of transactions
    cout << data1.revenue + data2.revenue << endl; // print their sum
    return 0;
}