#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(void)
{
	pid_t child_pid;
	int status;
	char *line = NULL;
	size_t len = 0;
	const char dl[] = " ";
	char *toks = strtok(line, dl);
	char *argv[] = {"/bin/ls", NULL};

	while (1)
	{
	printf("$ ");
	while (getline(&line, &len, stdin) != -1)
	{
	 if (toks != NULL)
	toks = strtok(NULL, dl);
	**argv = strdup(toks);
	}
	free(line);
	}
	child_pid = fork();
	if (child_pid == -1)
	{
	perror("Error:");
	return (1);
	}
	if (child_pid == 0)
	{
	sleep(3);
	}
	else
	{
	wait(&status);
	}
	if (execve(argv[0], argv, NULL) == -1)
	{
	perror("Error:");
	}
	return (0);
}
