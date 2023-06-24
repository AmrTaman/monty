#include "monty.h"
#include <stdio.h>
/**
 * mod - function
 * @head: head
 * @line_number: line number
 *
 */
void mod(struct stack_s **head, unsigned int line_number)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	if ((*head)->next == NULL)
	{
		free_stack(head);
		fclose(f);
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	if ((*head)->n == 0)
	{
		free_stack(head);
		fclose(f);
		fprintf(stderr, "L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	else
	{
		struct stack_s *pointer1;
		struct stack_s *pointer2;

		pointer1 = *head;
		pointer2 = (*head)->next;
		pointer2->n = (pointer2->n) % (pointer1->n);
		*head = pointer2;
		(*head)->prev = NULL;
		free(pointer1);
	}
}


