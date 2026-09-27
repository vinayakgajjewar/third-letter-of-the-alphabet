// ansi-constasconst

// gcc -ansi -Wall -pedantic ansi-constasconst.c -o ansi-constasconst

const int x = 5;
#define X 5

int main()
{
    // If compiled with -ansi -Wall -pedantic, GCC thinks this is a variable
    // length array.
    int arr1[x];

    // This is fine because #define is a true compile-time constant.
    int arr2[X];
}
