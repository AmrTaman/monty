#include "monty.h"
void push(stack_t **head, unsigned int line_num)
{


	struct stack_s *pointer = malloc(sizeof(struct stack_s));
	if (pointer == NULL)
	{
		fprintf(stderr, "Error: malloc failed");
		exit(EXIT_FAILURE);
	}
	if (head == NULL)
	{
		pointer -> n = a;
		pointer -> prev = NULL;
		pointer -> next = NULL;
		head = pointer;
	}
	else
	{
		pointer -> n = a;
		pointer -> prev = NULL;
		pointer -> next = head;
		head -> prev = pointer;
		head = pointer;
	}
}
void pall(void)
{
	if (head == NULL)
	{
	}
	else
	{
		struct stack_s *pointer;
		pointer = head;
		while (pointer != NULL)
		{
			printf("%d\n", pointer -> n);
			pointer = pointer -> next;
		}
	}
}


