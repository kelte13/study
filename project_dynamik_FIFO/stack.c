#include "stack.h"


struct stack_item_t {
    int value;
    struct stack_item_t *next;
};

struct stack_item_t *stack = NULL;

bool is_empty(void) {
    return (!stack);
}


void show(void) {
    if (is_empty()) {
        printf("stack is empty\n");
    }
    else {
        for(struct stack_item_t *stack_copy = stack; stack_copy; stack_copy = stack_copy->next)
            printf("%-3d", stack_copy->value);
    }
}

int push(int n) {
    struct stack_item_t *temp_stack = malloc(sizeof(struct stack_item_t));
    temp_stack->value = n;
    temp_stack->next = NULL;  //почему без этой строчки БЕСКОНЕЧНО выводится мусор
    if (is_empty()) {
        stack = temp_stack;
        return 0;
    }
    else {
        struct stack_item_t *stack_copy = stack;
        while (stack_copy->next) {
            stack_copy = stack_copy->next;
        }
        stack_copy->next = temp_stack;
        return 0;
    }
}

int pop(void) {
    struct stack_item_t *stack_copy = stack;
    stack = stack->next;
    free(stack_copy);
    return stack->value;
}
