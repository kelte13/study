#include "stack.h"
#define MAXOP 5

int arr[MAXOP];
int write = 0;
int read = 0;
int count = 0;

void show(void) {
    int temp = read;                 //+
    for (int i = 0; i < count; i++) {
        printf("%d", arr[temp++]);
        temp %= MAXOP;
    }
}

int push(int n) {                //+
    if (is_full() == 0) {
        write %= MAXOP;
        arr[write++] = n;
        count++;
        return 0;
    }
    else
        return -1;
}

int pop(void) {
    if (is_empty() == 1)
        return -1;
    else {
        read %= MAXOP;
        count--;
        return arr[read++];
    }
}

_Bool is_full(void) {
    if (count == MAXOP) {
        return 1;
    }
    return 0;
}

_Bool is_empty(void) {
    if (count == 0)
        return 1;
    else
        return 0;

}
