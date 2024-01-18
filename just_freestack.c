#include "monty.h"
/**
* dfree_stack - this function frees
* a doubly linked list
* @head: head of the stack
*/
void dfree_stack(stack_t *head)
{
	stack_t *aux;

	aux = head;
	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
