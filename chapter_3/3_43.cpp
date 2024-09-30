// Write three different version of a program to print the elements of `ia`.
// One version should use a range `for` to manage the iteration,
// the other two should use an ordinary `for` loop in one case using subscripts,
// and in the other using pointers. In all three programs write all the types directly.
// That is, do not use a type alias, `auto`, or `decltype` to simplify the code.
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

    for (const int(&row)[colCnt] : ia)
    {
        for (const int col : row)
        {
            cout << col << ' ';
        }
        cout << endl;
    }

    cout << endl; // Add an extra blank line

    cout << "Ordinary for loop using subscripts:" << endl;

    for (size_t i = 0; i != rowCnt; ++i)
    {
        for (size_t j = 0; j != colCnt; ++j)
        {
            cout << ia[i][j] << ' ';
        }
        cout << endl;
    }

    cout << endl; // Add an extra blank line

    cout << "Ordinary for loop using pointers:" << endl;

    for (const int(*p)[colCnt] = std::begin(ia); p != std::end(ia); ++p)
    {
        for (const int *q = std::begin(*p); q != std::end(*p); ++q)
        {
            cout << *q << ' ';
        }
        cout << endl;
    }

    return 0;
}
