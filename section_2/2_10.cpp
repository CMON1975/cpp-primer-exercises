// What are the initial values, if any, of each of the following variables?
#include <iostream>
std::string global_str; // global variable, C++ standard, empty string `""`
int global_int;         // global variable, C++ standard, 0

int main()
{
    int local_int;         // local varible, not auto-init in C++, garbage value
    std::string local_str; // local string variable, auto-init in C++, empty string `""`

    std::cout << global_str << std::endl;
    std::cout << global_int << std::endl;
    std::cout << local_str << std::endl;
    std::cout << local_str << std::endl;

    return 0;
}