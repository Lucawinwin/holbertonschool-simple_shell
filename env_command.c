#include "shell.h"
#include <stdio.h>

/**
 * env_command - Displays current environment variables
 * Return: Always 0
 */

extern char **environ;

void env_command(void)
{
	char **env = environ;

	while (*env)
	{
		printf("%s\n", *env);
		env++;
	}
}

	/**    int i;


    for (i = 0; environ[i] != NULL; i++)
    {
        printf("%s\n", environ[i]);
    }

    return (0);
}*/
