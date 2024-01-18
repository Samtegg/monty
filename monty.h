#ifndef MONTY_H
#define MONTY_H
#define  _POSIX_C_SOURCE 200809L
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <ctype.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>
/**
 * struct stack_s - this is a doubly linked list
 * representation of stack (or queue)
 * @n: the integer
 * @prev: this is the points to previous
 * element of the (or queue)
 * @next: this points to next
 * element of the stack (or queue)
 *
 * Description: this is the doubly linked list node structure
 * for stack, queues, LIFO,
 * FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct bus_s - this is the variables
 * -args, file, line content
 * @arg: the value
 * @file: this the pointer to the monty file
 * @content: the line content
 * @lifi: this the flag of change stack <-> queue
 * Description: this carries values through the program
 */
typedef struct bus_s
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
}  bus_t;
extern bus_t bus;
/**
 * struct instruction_s - this is the opcode
 * and its function
 * @opcode: this is the opcode
 * @f: this is the function
 * to handle the opcode
 *
 * Description: this is the opcode and its function
 * for stack, queues, LIFO,
 * FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;



char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
char  *clean_line(char *content);

/* just_push.c */
void df_push(stack_t **head, unsigned int number);

/* just_pall.c */
void df_pall(stack_t **head, unsigned int number);

/* just_pint.c */
void df_pint(stack_t **head, unsigned int number);

/* just_execute.c */
int dexecute(char *content, stack_t **head, unsigned int counter, FILE *file);

/* just_freestack.c */
void dfree_stack(stack_t *head);

/* just_pop.c */
void df_pop(stack_t **head, unsigned int counter);

/* just_swap.c */
void df_swap(stack_t **head, unsigned int counter);

/* just_add.c */
void df_add(stack_t **head, unsigned int counter);

/* just_nop.c */
void df_nop(stack_t **head, unsigned int counter);

/* just_sub.c */
void df_sub(stack_t **head, unsigned int counter);

/* just_div.c */
void df_div(stack_t **head, unsigned int counter);

/* just_mul.c */
void df_mul(stack_t **head, unsigned int counter);

/* just_mod.c */
void df_mod(stack_t **head, unsigned int counter);

/* just_pchar.c */
void df_pchar(stack_t **head, unsigned int counter);

/* just_pstr.c */
void df_pstr(stack_t **head, unsigned int counter);

/* just_rotl.c */
void df_rotl(stack_t **head, unsigned int counter);

/* just_rotr.c */
void df_rotr(stack_t **head, __attribute__((unused)) unsigned int counter);

/* just_addnode.c */
void daddnode(stack_t **head, int n);

/* just_queue.c */
void daddqueue(stack_t **head, int n);
void df_queue(stack_t **head, unsigned int counter);

/* just_stack */
void df_stack(stack_t **head, unsigned int counter);

#endif
