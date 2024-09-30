#include <iostream>
#include <climits>

int main()
{
    std::cout << "Size of short: " << sizeof(short) << " bytes" << std::endl;
    std::cout << "Size of int: " << sizeof(int) << " bytes" << std::endl;
    std::cout << "Size of long: " << sizeof(long) << " bytes" << std::endl;
    std::cout << "Size of long long: " << sizeof(long long) << " bytes" << std::endl;

    std::cout << "Range of short: " << SHRT_MIN << " to " << SHRT_MAX << std::endl;
    std::cout << "Range of int: " << INT_MIN << " to " << INT_MAX << std::endl;
    std::cout << "Range of long: " << LONG_MIN << " to " << LONG_MAX << std::endl;
    std::cout << "Range of long long: " << LLONG_MIN << " to " << LLONG_MAX << std::endl;

    return 0;
}
