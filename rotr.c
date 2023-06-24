#include<stdio.h>
#include"monty.h"
/**
 * rotr - replaces head with tail
 *
 * @head: pointer
 * @line_num: num:x
 */
void rotr(struct stack_s **head, unsigned int line_num)
{
	stack_t *ptr = *head;
	unsigned int x = line_num;

	if (*head == NULL || (*head)->next == NULL)
		return;
	while (ptr->next)
		ptr = ptr->next;
	ptr->prev->next = NULL;
	ptr->next = *head;
	ptr->prev = NULL;
	(*head)->prev = ptr;
	*head = ptr;
	line_num = x;
}

