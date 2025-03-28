#include <stdio.h>

int a;

int foo() {
    int a = 15;

    /*
     * The local variable takes precedence over the global variable here.
     */
    return a;
}

int bar() {
    int a = 20;
    return a;
}

int main() {
    a = 7;
    printf("a: %d\n", a);
    int foo_val = foo();
    printf("a: %d, foo_val: %d\n", a, foo_val);
    int bar_val = bar();
    printf("a: %d, bar_val: %d\n", a, bar_val);
}