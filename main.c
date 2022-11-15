#include "shell.h"

int main()
{
	char *command_line;
	/*char *tokenizecmd;*/
	while(1)
	{
		command_line = prompt();
		printf("The Command is %s", command_line);
	}
	/*tokenizecmd = _strtok(command_line);*/
	return(0);
}
