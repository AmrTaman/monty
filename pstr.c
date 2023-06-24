#include<stdio.h>
#include"monty.h"
/**
 * pstr - changes integer to string
 *
 * @head: pointer
 * @line_num: number of line
 */
void pstr(struct stack_s **head, unsigned int line_num)
{
	stack_t *ptr = *head;
	unsigned int x = line_num;

	if (*head == NULL)
		printf("\n");
	else
	{
		while (ptr && ptr->n != 0 && (ptr->n >= 0 && ptr->n <= 127))
		{
			printf("%c", ptr->n);
			ptr = ptr->next;
		}
		printf("\n");
	}
	line_num = x;
}


