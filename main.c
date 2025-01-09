#include "shell.h"

/**
 * main - Simple shell implementation
 * Return: Always 0
 */
int main(void)
{
    char *buffer = NULL;
    size_t bufsize = 0;
    ssize_t chars_read;
    int interactive = isatty(STDIN_FILENO);
    int exitstatus = 0;
    while (1)
    {
        if (interactive)
            printf("%s", PROMPT);

        chars_read = getline(&buffer, &bufsize, stdin);
        if (chars_read == -1)
            break;

        /* Remove newline character */
        if (chars_read > 0 && buffer[chars_read - 1] == '\n')
            buffer[chars_read - 1] = '\0';

        /* Skip empty lines */
        if (buffer[0] == '\0')
            continue;
if (strcmp(buffer, "exit") == 0)
        {
		exit_command(exitstatus);
            break;
  if (strcmp(buffer, "env") == 0)
        {
            env_command();  
            continue;  
        }
           /** exit_command(exitstatus);
            break;*/
        }
        execute_command(buffer);
    }

    free(buffer);
    return (0);
}
