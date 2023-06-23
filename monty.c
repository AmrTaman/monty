#include"monty.h"
#include<stdio.h>
#include<string.h>
/**
 * free_stack - freeing stack
 *
 * @head: head of stack
 */
void free_stack(stack_t **head)
{
	stack_t *ptr = *head, *tmp;
	while (ptr)
	{
		tmp = ptr;
		ptr = ptr->next;
		free(tmp);
	}
}
FILE *f = NULL;
/**
 * main - running the monty interpreterr
 *
 * @argc: number of values
 * @argv: elements of input values
 * Return: 0 in success
 */
int main(int argc, char **argv)
{
	char *s, line[1000];
	int line_num = 1;
	stack_t *head = NULL;

	if (argc == 1 || argc > 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	f = fopen(argv[1], "r");
	if (f == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while ((s = fgets(line, 1000, f)))
	{
		parse(s, line_num, &head);
		line_num++;
	}
	free_stack(&head);
	fclose(f);
	return (0);
}
