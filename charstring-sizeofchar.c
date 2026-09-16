// charstring-sizeofchar.c
// > gcc charstring-sizeofchar.c -o charstring-sizeofchar

// https://c-faq.com/charstring/sizeofchar.html

#include <stdio.h>

int main()
{
    // This will print 1.
    int char_sz = sizeof(char);
    printf("sizeof(char)=%d\n", char_sz);

    // This will print 4.
    int int_sz = sizeof(int);
    printf("sizeof(int)=%d\n", int_sz);

    // This will also print 4 because character literals are secretly ints!
    int charlit_sz = sizeof('a');
    printf("sizeof('a')=%d\n", charlit_sz);
}
