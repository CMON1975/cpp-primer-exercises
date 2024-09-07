// Compile the following program to see what happens when you forget the semicolon after a class definition. Remember the message for future reference.
struct Foo
{ /* empty */
} // Note: no semicolon
int
main()
{
    return 0;
}

// error: expected `;` after struct definition