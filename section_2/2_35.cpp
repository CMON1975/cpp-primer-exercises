// Determine the types then compile them in a program to confirm
#include <iostream>
int main()
{
    const int i = 42;   // `i` will be of type `const int`
    auto j = i;         // `j` will be of type `int` because the deduction drops the top-level `const` when deducing the type
    const auto &k = i;  // `k` will be a `const` reference to `i`
    auto *p = &i;       // `p` will be a pointer to `i`
    const auto j2 = i;  // `j2` will be of type `const int`
    const auto &k2 = i; // `k` will be a `const` reference to `i`

    std::cout << "i = " << i << " j = " << j << " k = " << k << " p = " << p << " j2 = " << j2 << " k2 = " << k2 << std::endl;

    return 0;
}