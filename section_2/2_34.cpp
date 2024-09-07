// Write a program to proof the results assumed in 2_33.txt
#include <iostream>
int main()
{
    int i = 0, &r = i;
    auto a = r; // `a` is an `int` (`r` is an alias for `i`, which has type `int`)
    const int ci = i, &cr = ci;
    auto b = ci;  // `b` is an `int` (top-level `const` in `ci` is dropped)
    auto c = cr;  // `c` is an `int` (`cr` is an alias for `ci` whose `const` is top-level)
    auto d = &i;  // `d` is an `int*` (& if an `int` object is `int*`)
    auto e = &ci; // `e` is `const int*` (& of a `const` object is low-level `const`)
    auto &g = ci; // `g` is a `const int&` that is bound to `ci`

    std::cout << "The value of a before reassignment is: " << a << std::endl;
    a = 42; // `a` is an `int` and is now assigned the value 42
    std::cout << "The value of a after reassignment is: " << a << std::endl;
    std::cout << "The value of b before reassignment is: " << b << std::endl;
    b = 42; // `b` is an `int` and is now assigned the value 42
    std::cout << "The value of b after reassignment is: " << b << std::endl;
    std::cout << "The value of c before reassignment is: " << c << std::endl;
    c = 42; // `c` is an `int` and is now assigned the value 42
    std::cout << "The value of c after reassignment is: " << c << std::endl;
    // d = 42; // error: `d` is an `int*` an cannot be assigned a value of type `int`
    // e = 42; // error: `e` is a `const int` and cannot be assigned a new value
    // g = 42; // error: `g` is a `const int&` and the value it refers to cannot be modified through this reference.

    return 0;
}