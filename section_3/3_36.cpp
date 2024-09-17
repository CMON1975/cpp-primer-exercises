// Write a program to compare two arrays for equality. Write a similar program to compare two vectors.
#include <iostream>
#include <iterator>
#include <vector>
#include <array>
using std::array;
using std::cout;
using std::endl;
using std::vector;

// Template function to compare any containers with iterators (liek arrays and vectors)
template <typename T>
bool compareContainers(const T &container1, const T &container2)
{
    if (container1.size() != container2.size())
    {
        return false;
    }

    for (size_t i = 0; i < container1.size(); ++i)
    {
        if (container1[i] != container2[i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    array<int, 5> arr1 = {1, 2, 3, 4, 5};
    array<int, 5> arr2 = {1, 2, 3, 4, 5};
    array<int, 5> arr3 = {4, 2, 1, 5, 2};

    vector<int> vec1 = {1, 2, 3, 4, 5};
    vector<int> vec2 = {1, 2, 3, 4, 5};
    vector<int> vec3 = {4, 2, 1, 5, 2};

    // Comparing arrays
    cout << (compareContainers(arr1, arr2) ? "The arrays are equal." : "The arrays are not equal.") << endl;
    cout << (compareContainers(arr2, arr3) ? "The arrays are equal." : "The arrays are not equal.") << endl;
    cout << (compareContainers(arr1, arr3) ? "The arrays are equal." : "The arrays are not equal.") << endl;

    // Comparing vectors
    cout << (compareContainers(vec1, vec2) ? "The vectors are equal." : "The vectors are not equal.") << endl;
    cout << (compareContainers(vec3, vec2) ? "The vectors are equal." : "The vectors are not equal.") << endl;
    cout << (compareContainers(vec1, vec3) ? "The vectors are equal." : "The vectors are not equal.") << endl;

    return 0;
}