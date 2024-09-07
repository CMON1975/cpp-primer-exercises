#include <iostream>

int main()
{
    std::cout << "Enter two numbers:" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;

    if (v1 < v2)
    {
        // v1 is smaller than v2, increment from v1 to v2
        while (v1 <= v2)
        {
            std::cout << v1 << std::endl;
            ++v1; // add 1 to v1
        }
    }
    else if (v1 > v2)
    {
        // v1 is larger than v2, decrement from v1 to v2
        while (v1 >= v2)
        {
            std::cout << v1 << std::endl;
            --v1; // subtract 1 from v1
        }
    }
    else
    {
        // v1 is equal to v2
        std::cout << v1 << std::endl;
    }

    return 0;
}
