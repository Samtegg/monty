#include "monty.h"
/**
 * df_pint - this function prints the top
 * @head: the stack head
 * @counter: the line_number
 * Return: it will give no return
*/
void df_pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		dfree_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
