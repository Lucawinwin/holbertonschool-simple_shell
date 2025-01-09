#include "shell.h"

/**
 * env_command - Affiche les variables d'environnement actuelles
 * Return: Toujours 0
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
