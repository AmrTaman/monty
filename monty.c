#include"monty.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
/**
 * main - running the monty interpreterr
 *
 * @argc: number of values
 * @argv: elements of input values
 * Return: 0 in success
 */
int main(int argc, char **argv)
{
	FILE *f;
	char *text, *frst, *s, line[1000];
	int line_num = 1;

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
	while((s = fgets(line, 1000, f)))
	{
		parse(s, line_num);
		line_num++;
	}
	return (0);
}
