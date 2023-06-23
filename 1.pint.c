#include "monty.h"
#include <stdio.h>
/**
 * pint - function
 * @head: head
 * @line_number: line number
 *
 */
void pint(struct stack_s **head, unsigned int line_number)
{
	stack_t *temp = *head;
	if (temp == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty", line_number);
		exit(EXIT_FAILURE);
	}
	else
	{
		printf("%d\n", temp->n);
	}
}
