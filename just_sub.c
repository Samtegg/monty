#include "monty.h"
/**
  *df_sub- this function sustration
  *@head: the stack head
  *@counter: the line_number
  *Return: it will give no return
 */
void df_sub(stack_t **head, unsigned int counter)
{
	stack_t *aux;
	int dsus, dnodes;

	aux = *head;
	for (dnodes = 0; aux != NULL; dnodes++)
		aux = aux->next;
	if (dnodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		dfree_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = *head;
	dsus = aux->next->n - aux->n;
	aux->next->n = dsus;
	*head = aux->next;
	free(aux);
}
