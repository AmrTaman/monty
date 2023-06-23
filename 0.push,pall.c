#include "monty.h"
/**
 * push - pushes an integer to a stack
 *
 * @head: head of a linked list
 * @line_num: line number
 */
void push(stack_t **head, unsigned int line_num)
{
	int a = survivor;
	struct stack_s *pointer;

	pointer = malloc(sizeof(struct stack_s));
	if (pointer == NULL)
	{
		fprintf(stderr, "Error: malloc failed");
		exit(EXIT_FAILURE);
	}
	if (*head == NULL)
	{
		pointer->n = a;
		pointer->prev = NULL;
		pointer->next = NULL;
		*head = pointer;
	}
	else
	{
		pointer->n = a;
		pointer->prev = NULL;
		pointer->next = head;
		*head->prev = pointer;
		*head = pointer;
	}
}
/**
 * pall - pushes an integer to a stack
 *
 * @head: head of a linked list
 * @line_num: line number
 */
void pall(stack_t **head, unsigned int line_num)
{

	struct stack_s *pointer, *tmp = *head;

	if (tmp == NULL)
		return;
	pointer = tmp;
	while (pointer != NULL)
	{
		printf("%d\n", pointer->n);
		pointer = pointer->next;
	}
}


