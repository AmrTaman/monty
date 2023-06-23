#include "monty.h"
#include <stdio.h>
/**
 * add - function
 * @head: head
 * @line_number: line number
 *
 */
void add(struct stack_s **head, unsigned int line_number)
{
	if ((*head)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short", line_number);
		exit(EXIT_FAILURE);
	}
	else
	{
		struct stack_s *pointer1;
		struct stack_s *pointer2;

		pointer1 = *head;
		pointer2 = (*head)->next;
		pointer2->n = (pointer1->n) + (pointer2->n);
		*head = pointer2;
		(*head)->prev = NULL;
		free(pointer1);
	}
}


