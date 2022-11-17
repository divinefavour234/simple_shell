#include "shell.h"
/**
 * main - Entry of the program
 * @argc: The number of argument passed
 * @argv: An array of string
 *
 * Return: always success(0)
 */

int main(int argc, char **argv)
{
	char *command_line;
	char **tokenizedcmd;
	char **cmdline;
	char **argvcopy;
	int j, status;
	int i = 0;
	pid_t child_pid = child_pid;

	argvcopy = malloc(sizeof(char *) * (argc));
	for (j = 1; j <= argc; j++)
	{
		argvcopy[i] = argv[j];
		i++;
	}
	argvcopy[j] = "\n";
	while (1)
	{
		command_line = prompt();
		tokenizedcmd = _strtok(command_line);
		cmdline = tokenizedcmd;

		child_pid = fork();
		if (child_pid == -1)
		{

			perror("Error:");
			return (1);
		}
		if (child_pid == 0)
		{
			sleep(1);
		}
		else
		{
			wait(&status);
		}
		if (execve(cmdline[0], cmdline, NULL) == -1)
		{
			perror("./shell");
		}
	}
	return (0);
}
