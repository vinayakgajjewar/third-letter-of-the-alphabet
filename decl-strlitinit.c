// decl-strlitinit.c

// https://c-faq.com/decl/strlitinit.html

#include <stdio.h>

int main()
{

    // This works because a has its own copy of the string literal. Note that
    // you have to use single quotes because double quotes creates a string
    // literal, which is an array containing 'B' and '\0'.
    char a[] = "Hello world";
    a[0] = 'B';
    printf("%s\n", a);

    // This does not work because b points to a string literal floating around
    // in read-only memory
    char *b = "Hello world";
    b[0] = 'B';
    printf("%s\n", b);
}
