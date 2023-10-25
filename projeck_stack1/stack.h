#include <stdio.h>
#define MAXOP 10

void show(void);
int push(int n);
int pop(void);
_Bool is_empty(void);
_Bool is_full(void);

int arr[MAXOP];
int first = 0;

