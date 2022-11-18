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

/*string helper*/
char *_strcpy(char *dest, char *src);
char *_strdup(char *str);
int _splitstring(char *str);
int _strcmp(const char *s1, const char *s2);
char *_strcat(char *dest, char *src);
char *_strcat(char *dest, char *src);


#endif /*SHELL_H*/
