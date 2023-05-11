#include "monty.h"
/**
 *
 */
int main(int argc, char *argv[])
{
	FILE *fd;
	char *line;
	int linenumber = 1;

	if (argc != 2) 
	{
		fprintf(stderr, "USAGE : monty file\n");
	}
	fd = fopen(argv[1], "r");
	{
		if (fd == NULL)
		{
			fprintf(stderr, "Error: Can't open file\n");
			exit(EXIT_FAILURE);
		}
	}
	while (fgets(line, sizeof(line), fd) != NULL)
	{
		if (line[strlen(line) - 1] == '\n')
		{
			line[strlen(line) - 1] = '\0';
		}
		linenumber++;
		
	}
	return (linenumber);
}
