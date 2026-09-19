// ansi-constptrconst.c
// > gcc ansi-constptrconst.c -o ansi-constptrconst

int main()
{
    char c1 = 'a';
    char c2 = 'b';

    // Non-const pointer to const char. You can modify the location the pointer
    // points to but not the pointed-to value.
    const char *p1 = &c1;
    p1 = &c2;  // this works
    // *p1 = 'c'; // this does not work

    // Also a non-const pointer to const char. You can modify the location the
    // pointer points to but not the pointed-to value.
    char const *p2 = &c1;
    p2 = &c2;  // this works
    // *p2 = 'd'; // this does not work

    // In contrast, this is a const pointer to a non-const char. You can modify
    // the pointed-to value, but not the location that the pointer points to.
    char *const p3 = &c1;
    // p3 = &c2;  // this does not work
    *p3 = 'e'; // this works
}