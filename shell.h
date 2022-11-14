#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

ssize_t prompt();
char *_strtok(char *input, char *delim);

#endif /*SHELL_H*/
