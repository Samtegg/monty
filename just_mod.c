#include "monty.h"
/**
 * df_mod - this function computes the
 * rest of the division of the second
 * top element of the stack by the top element of the stack
 * @head: the stack head
 * @counter: the line_number
 * Return: it will give no return
*/
void df_mod(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int dlen = 0, aux;

	h = *head;
	while (h)
	{
		h = h->next;
		dlen++;
	}
	if (dlen < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		dfree_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		dfree_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = h->next->n % h->n;
	h->next->n = aux;
	*head = h->next;
	free(h);
}
