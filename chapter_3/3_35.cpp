// Using pointers, write a program to set the elements in an array to zero.
#include <iostream>
#include <array>
using std::array;
using std::cout;
using std::endl;

constexpr size_t sz = 5;
array<int, sz> arr = {1, 2, 3, 4, 5};

int main()
{
    int *first = arr.data();
    int *last = arr.data() + sz;

    while (first != last)
    {
        *first = 0;
        ++first;
    }

    for (int *b = arr.data(); b != last; ++b)
        cout << *b << " ";

    cout << endl;

    return 0;
}