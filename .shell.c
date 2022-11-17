#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(void)
{
	pid_t child_pid;
	int status;
	char *argv[] = {"/bin/ls", "-l", NULL};

	child_pid = fork();
	if (child_pid == -1)
	{
	perror("Error:");
	return (1);
	}
	if (child_pid == 0)
	{
	printf("wait\n");
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
