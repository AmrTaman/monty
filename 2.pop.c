#include "monty.h"
#include <stdio.h>
void pop(void)
{
	if (head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack", __LINE__);
		exit(EXIT_FAILURE);
	}
	else
	{
		struct stack_s *pointer;
		pointer = head;
		head = head -> next;
		free(pointer);
	}
}

