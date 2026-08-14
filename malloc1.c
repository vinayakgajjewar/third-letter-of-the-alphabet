// malloc1.c

// gcc malloc1.c -o malloc1

// From here: https://c-faq.com/malloc/malloc1.html

#include <stdio.h>

// This will segfault because the variable "input" has not been set to point to
// any valid memory region.

// int main()
// {
//     printf("Type something:\n");
//     char *input;
//     gets(input);
//     printf("You typed: \"%s\"\n", input);
// }

// Note that you would want to use `fgets` instead of `gets` in practice because
// `gets` is deprecated.

int main()
{
    printf("Type something:\n");
    char input[100];
    gets(input);
    printf("You typed: \"%s\"\n", input);
}
