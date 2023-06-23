#include<stdio.h>
#include"monty.h"
/**
 * pchar - gets ascii of the integer in head
 * 
 * @head: head of stack
 * @line_num
 */
void pchar(stack_t **head, unsigned int line_num)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pchar, stack empty\n", line_num);
		free_stack(head);
		fclose(f);
		exit(EXIT_FAILURE);
	}
	if ((*head)->n >= 0 && (*head)->n <= 127)
	{
		printf("%c\n", (*head)->n);
	}
	else
	{
		fprintf(stderr, "L%u: can't pchar, value out of range\n", line_num);
		free_stack(head);
		fclose(f);
		exit(EXIT_FAILURE);
	}
}
