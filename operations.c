#include "monty.h"
/**
 *
 *
 */
stack_t *addToEmpty(stack_t *head, int value)
{
    stack_t *newnode = (stack_t *)malloc(sizeof(stack_t));
    newnode->next = NULL;
    newnode->prev = NULL;
    newnode->n = value;
    head = newnode;
    return (head);
}
/**
 *
 *
 */
stack_t *push(stack_t *head, int value)
{
    stack_t *newnode = (stack_t *)malloc(sizeof(stack_t));
    if (newnode == NULL)
    {
        return NULL;
    }
    newnode->n = value;
    newnode->prev = NULL;
    newnode->next = head;
    if (head != NULL)
    {
        head->prev = newnode;
    }

    return (head);
};
/**
 *
 *
 */
void pall(stack_t *head)
{
    stack_t *tail = (stack_t *)malloc(sizeof(stack_t));

    tail = head;
    while (tail->next != NULL)
    {
        tail = tail->next;
    }
    while (tail != NULL)
    {
        printf("%d", tail->n);
        tail = tail->prev;
    }

};

/**
 *
 *
 *
 */
int pint(stack_t *head, int linenumber)
{
    if (head == NULL)
    {
        fprintf(stderr, "L<line_number>: can't pint, stack empty\n");
        exit(EXIT_FAILURE);
    }
    else
        return (head->n);
};
/**
 *
 *
 */
void pop(stack_t *head)
{
    stack_t *tail = (stack_t *)malloc(sizeof(stack_t));
    stack_t *newtail= (stack_t *)malloc(sizeof(stack_t));

    tail = head;
    while (tail->next != NULL)
    {
        tail = tail->next;
    }
    newtail = tail->prev;
    newtail->next = NULL;
    free(tail);
}