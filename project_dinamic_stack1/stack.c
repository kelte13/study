#include "stack.h"

struct stack_item_t {
    int value;
    struct stack_item_t *next;
};

struct stack_item_t *stack = NULL;


struct stack_item_t *talloc(void) {
    return (struct stack_item_t *) malloc(sizeof(struct stack_item_t));
}

void show(void) {
    struct stack_item_t *tmp;
    for (tmp = stack; tmp; tmp = tmp->next) {
        printf ("%d\t", tmp->value);
    }
}

int push(int n){
    struct stack_item_t *tmp = talloc();
    tmp->value = n;
    tmp->next = stack;
    stack = tmp;
    return 0;
}

int pop(void) {
    if (is_empty() == 1)
       return -1;
    else {
        int temp;
        struct stack_item_t *prev = NULL;
        prev = stack;
        temp = prev->value;
        stack = stack->next;
        free(prev);
        return temp;
   }
}

bool is_empty(void) {
   return (!stack);
}



