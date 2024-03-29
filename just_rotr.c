#include "monty.h"
/**
  *df_rotr- this function rotates
  the stack to the bottom
  *@head: the stack head
  *@counter: the line_number
  *Return: it will give no return
 */
void df_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *copy;

	copy = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (copy->next)
	{
		copy = copy->next;
	}
	copy->next = *head;
	copy->prev->next = NULL;
	copy->prev = NULL;
	(*head)->prev = copy;
	(*head) = copy;
}
