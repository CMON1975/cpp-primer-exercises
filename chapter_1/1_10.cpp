#include <iostream>
int main()
{
    int val = 10;
    // keep executing the while as long as val is greater than or equal to zero
    while (val >= 0)
    {
        std::cout << val << std::endl;
        --val; // minus 1 from val
    }

    return 0;
}