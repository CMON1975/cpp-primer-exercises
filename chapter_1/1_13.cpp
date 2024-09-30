#include <iostream>
int main()
{
    int sum = 0;
    // keep executing the while as long as val is less than or equal to 100
    for (int i = 50; i <= 100; ++i)
        sum += i;
    std::cout << "Sum of 50 to 100 inclusive is "
              << sum << std::endl;

    int val = 10;
    // keep executing the while as long as val is greater than or equal to zero
    for (int i = 10; i >= 0; --i)
    {
        std::cout << val << std::endl;
        --val;
    }

    return 0;
}