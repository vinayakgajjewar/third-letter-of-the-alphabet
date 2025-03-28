#include <stdio.h>
#include <stdlib.h>

int a;

void foo(int *param_a) {
    int *local_p = (int *) malloc(sizeof(int));
    printf("Address of local variable from main(): %p\n", param_a);
    printf("Address of the first parameter in foo(): %p\n", &param_a);
    printf("Address of local variable in foo(): %p\n", &local_p);
    printf("Address of variable on the heap: %p\n", local_p);
    printf("Address of global variable: %p\n", &a);
    free(local_p);
}

int main() {
    int main_a;
    foo(&main_a);
}