#include "shell.h"

ssize_t prompt()
{
	char *prompt = "Root@User$ ";
	char *lineptr;
	size_t len = 0;
	ssize_t char_read;

	
	while(1)
	{
		printf("%s", prompt);
		char_read = getline(&lineptr, &len, stdin);
		if(char_read == -1)
		{
			printf("EXiting the Shell.....\n");
			return (-1);
		}

		printf("%s\n", lineptr);

		free(lineptr);
	}

	return (0);
}
