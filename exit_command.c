#include "shell.h"
#include <stdlib.h>

/**
 * exit_command - Exit the shell.
 * Return: Always returns 0 to indicate the shell should terminate.
 */
int exit_command(void)
{
    exit(EXIT_SUCCESS);
}
