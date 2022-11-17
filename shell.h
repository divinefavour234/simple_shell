#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

char *prompt();
char **_strtok(char *input);

/*Output*/
void _puts(char *str);
int _putchar(char c);


#endif /*SHELL_H*/
