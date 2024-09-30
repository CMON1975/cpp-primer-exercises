// What does the following program do?
#include <iostream>
int main()
{
    int i = 42;      // initializes integer `i` to 42
    int *p1 = &i;    // initializes integer pointer `p1` to the address of `i`
    *p1 = *p1 * *p1; // the value of `i` is squared (42 * 42 = 1764) and the result is stored back in `i` through the pointer `p1`

    std::cout << *p1 << std::endl;
}