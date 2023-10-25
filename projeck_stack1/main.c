#include "stack.c"

int main() {
    for (int i = 0; i < 7; i++) {
        push(i);
    }
    show();
    printf("\n");
    for (int i = 0; i < 5; i++) {
        pop();
    }
    printf("\n");
    show();
    return 0;
}

