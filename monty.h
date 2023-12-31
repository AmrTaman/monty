#ifndef amr
#define amr
#include<stdlib.h>
#include<stdio.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

extern int survivor;
extern FILE *f;
void free_stack(stack_t **head);
void parse(char *line, unsigned int line_num, stack_t **head);
void pint(struct stack_s **head, unsigned int line_number);
void pop(struct stack_s **head, unsigned int line_number);
void swap(struct stack_s **head, unsigned int line_number);
void add(struct stack_s **head, unsigned int line_number);
void nop(stack_t **head, unsigned int line_num);
void pall(stack_t **head, unsigned int line_num);
void push(stack_t **head, unsigned int line_num);
void _div(struct stack_s **head, unsigned int line_number);
void mul(struct stack_s **head, unsigned int line_number);
void mod(struct stack_s **head, unsigned int line_number);
void sub(struct stack_s **head, unsigned int line_number);
void pchar(struct stack_s **head, unsigned int line_number);
void pstr(struct stack_s **head, unsigned int line_number);
void rotl(struct stack_s **head, unsigned int line_number);
void rotr(struct stack_s **head, unsigned int line_num);
#endif
