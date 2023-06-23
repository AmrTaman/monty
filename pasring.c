#include"monty.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
stack_t *head = NULL;
nt survivor = 0;
/**
 * pasre - parses and extracts needed string
 *
 * @line: each line of a file
 * @line_num: number of line
 */
void parse(char *line, unsigned int line_num)
{
	instruction_t func[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop}
	};
	char *ch;
	unsigned int i = 0;

	ch = strtok(line, " ");
	while (ch)
	{
		while (ch && func[i].opcode)
		{
			if (strcmp(ch, func[i].opcode) == 0)
			{
				survivor = atoi(strtok(line, " "));
				free(ch);
				func[i].f(head, line_num);
				return (0);
			}
			i++;
		}
		ch = strtok(line, " ");
	}
	free(ch);
}

