#include <iostream>
int main()
{
    int sum = 0;
    // sum values from -100 through 100 inclusive
    for (int i = -100; i <= 100; ++i)
        sum += i;
    std::cout << "Sum of -100 to 100 inclusive is "
              << sum << std::endl;

    return 0;
}