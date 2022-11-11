#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[] = "happy new year.";
	const char dl[] = " ";
	char *ptr = strtok(s, dl);
	while (ptr != NULL)
	{
	printf("%s\n", ptr);
	ptr = strtok(NULL, dl);
	}
	return (0);
}
