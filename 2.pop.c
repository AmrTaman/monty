#include "monty.h"
#include <stdio.h>
/**
 * pint - function
 * @head: head
 * @line_number: line number
 *
 */
void pop(struct stack_s **head, unsigned int line_number)
{
	if (head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack", line_number);
		exit(EXIT_FAILURE);
	}
	else
	{
		struct stack_s *pointer;
		pointer = head;
		head = head-> next;
		free(pointer);
	}
}

