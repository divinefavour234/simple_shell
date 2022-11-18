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
	char **tokenizedcmd, **cmdline, **argvcopy;
	int j, status;
	int i = 0;
	pid_t child_pid = child_pid;

	argvcopy = malloc(sizeof(char *) * (argc));
	for (j = 1; j <= argc; j++)
	{
		argvcopy[i] = argv[j];
		i++;
	}
	while (1)
	{
		if (argc >= 2)
		{
			cmdline = argvcopy;
			argc = 0;
		}
		else
		{
			tokenizedcmd = _strtok(prompt());
			cmdline = tokenizedcmd;
		}
		child_pid = fork();
		if (child_pid == -1)
		{
			perror("Error:");
			return (1);
		}
		if (child_pid == 0)
		{
			sleep(1);
			if (execve(cmdline[0], cmdline, NULL) == -1)
				perror("./shell");
		}
		else
			wait(&status);
	}
	return (0);
}
