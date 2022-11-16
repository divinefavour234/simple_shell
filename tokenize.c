#include "shell.h"

char **_strtok(char *input)
{
	int charnum, num_token, i;
	char *cmdinput, *token, *cmdinput_copy;
	const char *delim;
	char **Argv;
	int tokenlength;

	charnum = 0;
	i = 0;
	num_token = 0;
	delim = " ";
	cmdinput = input;
	while (cmdinput[charnum] != '\0')
	{
		charnum++;
	}

	cmdinput_copy = malloc(sizeof (char) * charnum);

	strcpy(cmdinput_copy, cmdinput);

	token = strtok(cmdinput, delim);
	while (token != NULL)
	{
		num_token++;
		token = strtok(NULL, delim);
	}
	num_token++;
	
	Argv = malloc(sizeof(char *) * num_token);

	token = strtok(cmdinput_copy, delim);

	for (i = 0; token != NULL; i++)
	{
		tokenlength = strlen(token);
		Argv[i] = malloc(sizeof (char) * tokenlength);
		strcpy(Argv[i], token);
		token = strtok(NULL, delim);
	}
	Argv[i] = NULL;

	return (Argv);
}
