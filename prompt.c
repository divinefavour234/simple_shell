#include "shell.h"

ssize_t prompt(int argc, __attribute__((unused))char *argv[])
{
	char *line = NULL;
	size_t len = 0;

	
	while(argc != -1)
	{
		printf("$ ");
		getline(&line, &len, stdin);
	}

	free(line);
	exit(EXIT_SUCCESS);
}
