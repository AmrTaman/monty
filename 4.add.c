#include "monty.h"
#include <stdio.h>

void add(void)
{
	if (head -> next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short", __LINE__);
		exit(EXIT_FAILURE);
	}
	else
	{
		struct stack_s pointer1;
		struct stack_s pointer2;
		pointer1 = head;
		pointer2 = head -> next;
		pointer2 -> n = (pointer1 -> n) + (pointer2 -> n);
		head = pointer2;
		head -> prev = NULL;
		free(pointer1);
	}
}
