#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "head.h"

struct stack_item_t
{
    int value;
    struct stack_item_t *next;
};

struct stack_item_t *stack = NULL;

void show(void)
{
    if(is_empty())
    {
        printf("stack is empty\n");
    }
    else
    {
        struct stack_item_t *stack_copy = stack;
        while(stack_copy)
        {
            printf("%d\t", stack_copy->value);
            stack_copy = stack_copy -> next;
        }
        printf("\n");
    }
}

bool is_empty(void)
{
    return(!stack);
}

int push(int n)
{
    struct stack_item_t *new_stack_item = malloc(sizeof(struct stack_item_t));
    new_stack_item->value=n;
    new_stack_item->next=NULL;
    if(is_empty())
    {
        stack=new_stack_item;
    }
    else
    {
        struct stack_item_t *copy = stack;

        while(copy->next)
        {
            copy = copy->next;
        }
        copy->next = new_stack_item;

    }
    return 0;
}

int pop(void) {

    struct stack_item_t *stack_copy_last = stack;
    if (stack_copy_last->next) {
        while (stack_copy_last->next) {
            stack_copy_last = stack_copy_last->next;
        }
        struct stack_item_t *stack_copy_penultimate = stack;
        while (stack_copy_penultimate->next->next) {
            stack_copy_penultimate = stack_copy_penultimate->next;
        }
        int temp = stack_copy_last->value;
        stack_copy_penultimate->next = NULL;
        free(stack_copy_last);
        return temp;
    }
    else {
         while (stack_copy_last->next) {
            stack_copy_last = stack_copy_last->next;
        }
        int temp = stack_copy_last->value;
        free(stack_copy_last);
        stack = NULL;
        return temp;
    }
}
