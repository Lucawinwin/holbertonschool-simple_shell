#include "shell.h"

/**
 * env_command - Displays current environment variables
 * Return: Always 0
 */
int env_command(void)
{
    extern char **environ;

    int i;


    for (i = 0; environ[i] != NULL; i++)
    {
        printf("%s\n", environ[i]);
    }

    return (0);
}
