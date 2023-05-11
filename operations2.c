#include "monty.h"
/**
 *
 *
 */
void add(stack_t *head)
{
    int sum;
    int count = 1;
    stack_t *tail = (stack_t *)malloc(sizeof(stack_t));
    stack_t *pretail = (stack_t *)malloc(sizeof(stack_t));

    if (head == NULL)
    {
        fprintf(stderr, "L<line_number>: can't add, stack empty\n");
        exit(EXIT_FAILURE);
    }
    while (tail->next != NULL)
    {
        tail = tail->next;
        count++;
    }
    if (count < 2)
    {
        fprintf(stderr, "L<line_number>: can't add, stack too short\n");
        exit(EXIT_FAILURE);
    }
    else
    {

        pretail = tail->prev;
        sum = tail->n + pretail->n;
        pretail->n = sum;
        free(tail);
    }
}
/***
 *
 *
 */
void swap(stack_t *head)
{
    int sum;
    int count = 1;
    stack_t *tail = (stack_t *)malloc(sizeof(stack_t));
    stack_t *pretail = (stack_t *)malloc(sizeof(stack_t));
    int tmp;

    if (head == NULL)
    {
        fprintf(stderr, "L<line_number>: can't  swap, stack empty\n");
        exit(EXIT_FAILURE);
    }
    while (tail->next != NULL)
    {
        tail = tail->next;
        count++;
    }
    if (count < 2)
    {
        fprintf(stderr, "L<line_number>: can't  swap, stack too short\n");
        exit(EXIT_FAILURE);
    }
    else
    {
        tmp = tail->n;
        tail->n = pretail->n;
        pretail->n = tmp;
    }
};
/**
 *
 *
 */
void nop(void)
{
    return;
};