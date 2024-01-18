#include "monty.h"
/**
* dexecute - this function executes the opcode
* @stack: this is the head
* linked list - stack
* @counter: the line_counter
* @file: the poiner
* to monty file
* @content: the line content
* Return: it will give
* no return
*/
int dexecute(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	instruction_t opst[] = {
				{"push", df_push}, {"pall", df_pall}, {"pint", df_pint},
				{"pop", df_pop},
				{"swap", df_swap},
				{"add", df_add},
				{"nop", df_nop},
				{"sub", df_sub},
				{"div", df_div},
				{"mul", df_mul},
				{"mod", df_mod},
				{"pchar", df_pchar},
				{"pstr", df_pstr},
				{"rotl", df_rotl},
				{"rotr", df_rotr},
				{"queue", df_queue},
				{"stack", df_stack},
				{NULL, NULL}
				};
	unsigned int di = 0;
	char *op;

	op = strtok(content, " \n\t");
	if (op && op[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[di].opcode && op)
	{
		if (strcmp(op, opst[di].opcode) == 0)
		{	opst[di].f(stack, counter);
			return (0);
		}
		di++;
	}
	if (op && opst[di].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", counter, op);
		fclose(file);
		free(content);
		dfree_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
