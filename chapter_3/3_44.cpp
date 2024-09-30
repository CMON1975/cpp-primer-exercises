// Rewrite the program from 3_43.cpp using a type alias for the type of the loop control variables.
#include <iostream>

using std::cout;
using std::endl;

int main()
{
    constexpr size_t rowCnt = 3, colCnt = 4;
    int ia[rowCnt][colCnt] = {
        {0, 1, 2, 3},
        {4, 5, 6, 7},
        {8, 9, 10, 11}};

    using RowType = int[colCnt]; // each row is an array of 4 integers
    using ColType = int;         // each col is a single integer

    cout << "Range based for:" << endl;

    for (const RowType &row : ia)
    {
        for (const ColType &col : row)
        {
            cout << col << ' ';
        }
        cout << endl;
    }

    cout << endl;

    cout << "Ordinary for loop using subscripts:" << endl;

    for (size_t i = 0; i != rowCnt; ++i)
    {
        for (size_t j = 0; j != colCnt; ++j)
        {
            cout << ia[i][j] << ' ';
        }
        cout << endl;
    }

    cout << endl;

    cout << "Ordinary loop using pointers:" << endl;

    for (RowType *p = std::begin(ia); p != std::end(ia); ++p)
    {
        for (ColType *q = std::begin(*p); q != std::end(*p); ++q)
        {
            cout << *q << ' ';
        }
        cout << endl;
    }

    return 0;
}