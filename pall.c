#include "monty.h"
/**
 * f_pall - it prints the stack
 * @head: the stack head
 * @counter: is not used
 * Return: nothing to return
 */
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		reutrn;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
