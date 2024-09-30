#include <iostream>
int main()
{
    std::cout << "Enter two numbers (the first must be lower than the second):" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;

    // keep executing the while as long as v1 is less than or equal to v2
    while (v1 <= v2)
    {
        std::cout << v1 << std::endl;
        ++v1; // add 1 to val
    }

    return 0;
}