#include "monty.h"

/**
 * main - main function
 * @argc:  number of arguments
 * @argv:  array of the elements
 * Return: 0
 */

int main(int argc, char *argv[])
{
	size_t i = 0;
	ssize_t read = 1;
	stack_t *stack = NULL;
	char *filename;
	FILE *fp;
	char *line = NULL;
	unsigned int line_number = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	filename = argv[1];
	fp = fopen(filename, "r");
	if (fp == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}

	while (read > 0)
	{
		read = getline(&line, &i, fp);
		line_number++;

		if (read > 0)
		{
			execute(line, &stack, line_number);
		}
	}
	free(line);
	free_stack(stack);
	fclose(fp);

	return (0);
}