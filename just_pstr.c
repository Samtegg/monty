#include "monty.h"
/**
 * df_pstr - this function prints the string
 * starting at the top of the stack,
 * followed by a new
 * @head: the stack head
 * @counter: the line_number
 * Return: it will give no return
*/
void df_pstr(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
