// What does the following code print?
#include <iostream>
int main()
{
    int i, &ri = i;
    i = 5;
    ri = 10;
    std::cout << i << " " << ri << std::endl; // Prints 10 10, as setting the reference ri to 10 sets i to 10.

    return 0;
}