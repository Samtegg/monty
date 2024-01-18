#include "monty.h"
/**
 * df_push - this function add
 * node to the stack
 * @head: the stack head
 * @counter: the line_number
 * Return: it will give no return
*/
void df_push(stack_t **head, unsigned int counter)
{
	int dn, dj = 0, dflag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			dj++;
		for (; bus.arg[dj] != '\0'; dj++)
		{
			if (bus.arg[dj] > 57 || bus.arg[dj] < 48)
				dflag = 1; }
		if (dflag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(bus.file);
			free(bus.content);
			dfree_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		dfree_stack(*head);
		exit(EXIT_FAILURE); }
	dn = atoi(bus.arg);
	if (bus.lifi == 0)
		daddnode(head, dn);
	else
		daddqueue(head, dn);
}
