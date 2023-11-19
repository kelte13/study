#include "stack.h"

int main()
{
    int a = 0;
    show();
    push(5);
    show();
    printf("\n");
    push(8);
    push(2);
    push(3);
    push(3);
    push(4); //на этом моменте в стеке нет места
    show();
    printf("\n");
    a = pop();
    printf("%d\n", a);
    a = pop();
    printf("%d\n", a);
    show();
    printf("\n");
    push(4);
    show();
    printf("\n");
    a = pop();
    printf("%d\n", a);
    a = pop();
    printf("%d\n", a);
    a = pop();
    printf("%d\n", a);
    a = pop();
    printf("%d\n", a);
    a = pop();  //на этом моменте стек пустой
    printf("%d\n", a);
    push(7);
    push(2);
    show();
    return 0;
}
