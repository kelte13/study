#include <stdio.h>
#include <stdlib.h>
#include "head.h"

int main() {
    show();
    push(1);
    show();
    push(2);
    show();
    push(3);
    show();
    push(4);
    push(5);
    show();
    int a = pop();
    printf("%d\n", a);
    show();
    a = pop();
    printf("%d\n", a);
    a = pop();
    printf("%d\n", a);
    show();
    a = pop();
    printf("%d\n", a);
    a = pop();
    printf("%d\n", a);
    show();
    return 0;
}
