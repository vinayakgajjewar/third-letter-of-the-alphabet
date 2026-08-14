// charstring-assign.c

// https://c-faq.com/charstring/assign.html

#include <string.h>

int main()
{
    char a[] = "Hello world";

    // Strings are arrays, and you cannot assign to arrays directly.
    // char b[12];
    // b = "Hello world";

    // Note that you have to reserve one extra byte for the null terminator.
    char c[12];
    strcpy(c, "Hello world");
}
