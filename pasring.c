#include"monty.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int survivor = 0;
/**
 * parse - parses and extracts needed string
 *
 * @line: each line of a file
 * @line_num: number of line
 * @head: head of the list
 */
void parse(char *line, unsigned int line_num, stack_t **head)
{
	instruction_t func[] = {{"push", push}, {"pall", pall},
		{"pint", pint}, {"pop", pop}, {"swap", swap},
		{"add", add}, {"nop", nop}, {"NULL", NULL}
	};
	char *ch;
	unsigned int i = 0;

	ch = strtok(line, "\t \n");
	while (ch && func[i].opcode)
	{
		if (strcmp(ch, func[i].opcode) == 0)
		{
			if (strcmp(ch, "push") == 0)
			{
				ch = strtok(NULL, "\t \n");
				if (atoi(ch) == 0 && ch[0] != '0')
				{
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
			free(ch);
			free_stack(head);
			exit(EXIT_FAILURE);
		}
	}


}

