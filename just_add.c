#include "monty.h"
/**
 * df_add - this function adds the top two
 * elements of the stack.
 * @head: this stack head
 * @counter: the line_number
 * Return: there is no return
*/
void df_add(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		dfree_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	aux = h->n + h->next->n;
	h->next->n = aux;
	*head = h->next;
	free(h);
}
