#include "shell.h"
/**
 * _strtok - tokenize inputs from cmd line
 * @input: An array of character that will be tokenized
 * Return: It returns An array of string that
 * has been tokenized
 */
char **_strtok(char *input)
{
	char *token;
	int i = 0, wordcount = 0;
	char *delimiter = " \n";
	char **av;
    
    	wordcount = _splitstring(input);
	if (!wordcount)
		return (NULL);
	av = malloc((wordcount + 1) * sizeof(char *));
	if (av == NULL)
		exit(1);
	token = strtok(input, delimiter);
	while (token != NULL)
	{
		av[i] = _strdup(token);
		token = strtok(NULL, delimiter);
		i++;
    	}
	av[i] = NULL;
	return (av);
	free(av);
}
