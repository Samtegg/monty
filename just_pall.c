#include "monty.h"
/**
 * df_pall - this function
 * prints the stack
 * @head: the stack head
 * @counter: it is no used
 * Return: it will give no return
*/
void df_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
