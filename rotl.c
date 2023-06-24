#include<stdio.h>
#include"monty.h"
/**
 * rotl - replaces head with tail
 *
 * @head: pointer
 * @line_num: num:x
 */
void rotl(struct stack_s **head, unsigned int line_num)
{
	stack_t *ptr = *head, *ptr2;
	unsigned int x = line_num;

	if (*head == NULL || (*head)->next == NULL)
		return;
	ptr->next->prev = NULL;
	*head = ptr->next;
	ptr2 = ptr;
	while (ptr->next)
		ptr = ptr->next;
	ptr2->prev = ptr;
	ptr2->next = NULL;
	ptr->next = ptr2;
	line_num = x;
}


