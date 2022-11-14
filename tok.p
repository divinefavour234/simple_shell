#include "shell.h"

char *_strtok(char *input, char *delim)
{
	char *ptr;
	
	delim = " ";
	ptr = strtok(input, delim);
	while (ptr != NULL)
	{
	ptr = strtok(NULL, delim);
	}
	return (ptr);
}
