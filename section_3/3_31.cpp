// Write a program to define an array of ten `ints`. Give each element the same value as its position in the array.
#include <cstddef>
#include <iostream>

using std::cout;
using std::size_t;

constexpr size_t array_size = 10;
int ia[array_size];

int main()
{
    int ix = 0;
    for (auto &i : ia)
        i = ix++;

    // output to verify
    for (const auto &i : ia)
        cout << i << " ";
    return 0;
}