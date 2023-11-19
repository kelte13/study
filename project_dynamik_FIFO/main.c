#include "stack.h"

int main()
{
    show();
    push(1);
    push(2);
    push(3);
    show();
    int a = pop();
    printf("\n%d\n", a);
    show();
    return 0;
}
