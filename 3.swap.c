#include "monty.h"
#include <stdio.h>
/**
 * swap - function
 * @head: head
 * @line_number: line number
 *
 */
void swap(struct stack_s **head, unsigned int line_number)
{
	if ((*head)->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short", line_number);
		exit(EXIT_FAILURE);
	}
	else
	{
		struct stack_s *pointer1;
		struct stack_s *pointer2;

		pointer1 = *head;
		pointer2 = (*head)->next;
		pointer1->next = pointer2->next;
		*head = pointer2;
		(*head)->next = pointer1;
		(*head)->prev = NULL;
		pointer1->prev = *head;

	}
}


