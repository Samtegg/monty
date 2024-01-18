#include "monty.h"
/**
 * df_mul - this function multiplies the
 * top two elements of the stack.
 * @head: the stack head
 * @counter: the line_number
 * Return: it will give no return
*/
void df_mul(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		dfree_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	aux = h->next->n * h->n;
	h->next->n = aux;
	*head = h->next;
	free(h);
}
