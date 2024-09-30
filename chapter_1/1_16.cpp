#include <iostream>
int main()
{
    int sum = 0, value = 0;
    // read until EOF, calculate running total of all values read
    std::cout << "Enter values separated by spaces, press CTRL+Z, then press ENTER to calculate sum total:" << std::endl;
    while (std::cin >> value)
        sum += value; // equivalent to sum = sum + value
    std::cout << "Sum is: " << sum << std::endl;
    return 0;
}