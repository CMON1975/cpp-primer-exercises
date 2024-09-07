// Write code to change the value of a pointer. Write code to change the value to which the pointer points
int main()
{
    int i = 42;
    int *pi = nullptr;
    pi = &i; // `pi` now holds the address of `i`
    *pi = 0; // `i` is now `0`
}