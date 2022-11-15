#include "shell.h"

int main()
{
	char *command_line;
	char **tokenizedcmd;
	int i;
	while(1)
	{
		command_line = prompt();
		tokenizedcmd = _strtok(command_line);

		for (i = 0; tokenizedcmd[i] != NULL; i++)
		{
			printf("%s",tokenizedcmd[i]);
		}

	}	
	return(0);
}
