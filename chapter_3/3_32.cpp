// Copy the array defined in 3_31.cpp into another array. Rewrite using `vector`.
#include <cstddef>
#include <iostream>
#include <vector>

using std::cout;
using std::size_t;
using std::vector;

constexpr size_t array_size = 10;
int ia[array_size];
int ia_copy[array_size];
vector<int> iv(array_size);
vector<int> iv_copy(array_size);

int main()
{
    int ix = 0;
    for (auto &i : ia)
        i = ix++;

    // copy values from ia into ia_copy
    for (size_t i = 0; i < array_size; ++i)
        ia_copy[i] = ia[i];

    // output to verify
    cout << "Original array (ia): ";
    for (const auto &i : ia)
        cout << i << " ";

    cout << "\nCopied array (ia_copy): ";
    for (const auto &i : ia_copy)
        cout << i << " ";

    cout << "\n";

    int iy = 0;
    for (auto &i : iv)
        i = iy++;

    // copy values from iv into iv_copy
    iv_copy = iv;

    // Output to verify
    cout << "Original vector (ia): ";
    for (const auto &i : ia)
        cout << i << " ";

    cout << "\nCopied vector (ia_copy): ";
    for (const auto &i : ia_copy)
        cout << i << " ";

    cout << "\n";

    return 0;
}