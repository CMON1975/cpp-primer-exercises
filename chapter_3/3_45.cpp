// Rewrite the program from 3_44.cpp using `auto`.
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

    cout << "Range based for:" << endl;

    for (const auto &row : ia)
    {
        for (auto col : row)
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

    cout << "Ordinary for loop using pointers:" << endl;

    for (auto p = std::begin(ia); p != std::end(ia); ++p)
    {
        for (auto q = std::begin(*p); q != std::end(*p); ++q)
        {
            cout << *q << ' ';
        }
        cout << endl;
    }

    return 0;
}
