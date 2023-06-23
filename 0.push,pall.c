#include "monty.h"
#include<stdio.h>
/**
 * push - pushes an integer to a stack
 *
 * @head: head of a linked list
 * @line_num: line number
 */
void push(stack_t **head, unsigned int line_num)
{
	int a = survivor;
	unsigned int x =  line_num;
	struct stack_s *pointer;

	line_num = x;
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
		pointer->next = *head;
		(*head)->prev = pointer;
		*head = pointer;
	}
	line_num = 8;
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
	unsigned int x =  line_num;

	if (tmp == NULL)
		return;
	pointer = tmp;
	line_num = x;
	while (pointer != NULL)
	{
		printf("%d\n", pointer->n);
		pointer = pointer->next;
	}
}


