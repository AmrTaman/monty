#include"monty.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int survivor = 0;
/**
 * char_check - checks characters
 *
 * @len: length of string
 * @ptr: pointer
 *Return: integer
 */
int char_check(char *ptr, unsigned int len)
{
	unsigned int i = 0;

	for (; i < len; i++)
	{
		if ((ptr[i] < '0' || ptr[i] > '9') && ptr[i] != '-')
		{
			return (1);
		}
	}
	return (0);
}

/**
 * parse - parses and extracts needed string
 *
 * @line: each line of a file
 * @line_num: number of line
 * @head: head of the list
 */
void parse(char *line, unsigned int line_num, stack_t **head)
{
	instruction_t func[] = {{"push", push}, {"pall", pall}, {"pstr", pstr}
		, {"pint", pint}, {"pop", pop}, {"swap", swap}, {"rotl", rotl}
		, {"add", add}, {"nop", nop}, {"sub", sub}, {"mul", mul},
	{"div", _div}, {"mod", mod}, {"pchar", pchar}, {"NULL", NULL}};
	char *ch;
	unsigned int i = 0;

	ch = strtok(line, "\t \n");
	while (ch && func[i].opcode)
	{
		if (ch[0] == '#')
			return;
		if (strcmp(ch, func[i].opcode) == 0)
		{
			if (strcmp(ch, "push") == 0)
			{
				ch = strtok(NULL, "\t \n");
				if (ch == NULL || (atoi(ch) == 0 &&
							 ch[0] != '0' && ch[1] != '0') || char_check(ch, strlen(ch)))
				{
					fflush(stdout);
					fprintf(stderr, "L%u: usage: push integer\n", line_num);
					free_stack(head);
					fclose(f);
					exit(EXIT_FAILURE);
				}
				survivor = atoi(ch);
			}
			func[i].f(head, line_num);
			return;
		}
		i++;
		if (func[i].f == NULL)
		{
			fprintf(stderr, "L%d: unknown instruction %s\n", line_num, ch);
			free_stack(head);
			fclose(f);
			exit(EXIT_FAILURE);
		}
	}
}

