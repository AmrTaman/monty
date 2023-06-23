#include "monty.h"
#include <stdio.h>
/**
 * nop - function
 *
 * @head: pointer
 * @line_num: number
 */
void nop(stack_t **head, unsigned int line_num)
{
	unsigned int x = line_num;
	stack_t *m = *head;

	line_num = x;
	*head = m;

}
