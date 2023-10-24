#include <stdio.h>
#define MAXOP 10

void show(void);
int push(int n);
int pop(void);
_Bool is_empty(void);
_Bool is_full(void);

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

int arr[MAXOP];
int first = 0;

void show(void) {
    for (int i = 0; i < first; i++)
        printf("%d", arr[i]);
}

int push(int n) {
    if (is_full() == 0) {
        arr[first++] = n;
        return 0;
    }
    else
        return -1;
}

int pop(void) {
    if (is_empty() == 1)
        return -1;
    else {
        printf("%d", arr[--first]);
        arr[first] = 0;
    }
}

_Bool is_full(void) {
    if (first == MAXOP) {
        return 1;
    }
    return 0;
}

_Bool is_empty(void) {
    if (first == 0)
        return 1;
    else
        return 0;

}
