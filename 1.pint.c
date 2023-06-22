#include "monty.h"
#include <stdio.h>

void pint(void)
{
	if (head == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty", __LINE__);
		exit(EXIT_FAILURE);
	}
	else
	{
		printf("%d\n", head -> n);
	}
}
