#include "monty.h"
/**
 * df_queue - this function
 * prints the top
 * @head: the stack head
 * @counter: the line_number
 * Return: it will give no return
*/
void df_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * daddqueue - this function add
 * node to the tail stack
 * @n: the new_value
 * @head: the head of the stack
 * Return: it will give no return
*/
void daddqueue(stack_t **head, int n)
{
	stack_t *new_node, *aux;

	aux = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (aux)
	{
		while (aux->next)
			aux = aux->next;
	}
	if (!aux)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		aux->next = new_node;
		new_node->prev = aux;
	}
}
