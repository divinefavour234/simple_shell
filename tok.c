#include "shell.h"

int main(void)
{
	int charnum;
       	int num_token; 
	int i;
	char *cmdinput;
       	char *token; 
	char *cmdinput_copy;
	const char *delim;
	char **Argv;
	printf("reached here 1");
	charnum = 0;
	i = 0;
	num_token = 0;
	delim = " \n";
	cmdinput = "input agjg fs fp";
	while (cmdinput[charnum] != '\0')
	{
		i++;
	}
	printf("reached here 2");
	cmdinput_copy = malloc(sizeof (char) * charnum);

	strcpy(cmdinput_copy, cmdinput);
	printf("reached here 3");
	token = strtok(cmdinput, delim);
	while (token != NULL)
	{
		num_token++;
		token = strtok(NULL, delim);
	}
	num_token++;
	printf("reached here 4");
	Argv = malloc(sizeof(char *) * num_token);

	token = strtok(cmdinput_copy, delim);

	for (i = 0; token != NULL; i++)
	{
		Argv[i] = malloc(sizeof (char) * strlen(token));
		printf("Toke is %s", token);
		strcpy(Argv[i], token);
		token = strtok(NULL, delim);
	}

	for (i = 0; Argv[i] != NULL; i++)
        {
                printf("%s",Argv[i]);
        }

}
