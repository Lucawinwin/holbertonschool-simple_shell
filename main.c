#include "shell.h"
#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


void debug_path()
{
	char *path_value = path();
	if (path_value != NULL)
	{
		printf("Current PATH: %s\n", path_value);
	}
	else
	{
		printf("PATH not found\n");
	}
}
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
  int command_status = execute_command(buffer);
    init_global_environ();
    while (1)
    {
        if (interactive)
	{
            printf("%s", PROMPT);
	    fflush(stdout);
	}
        chars_read = getline(&buffer, &bufsize, stdin);
        if (chars_read == -1)
	{
            break;
	}
        /* Remove newline character */
        if (chars_read > 0 && buffer[chars_read - 1] == '\n')
	{
            buffer[chars_read - 1] = '\0';
	}
        /* Skip empty lines */
        if (buffer[0] == '\0')
            continue;
if (strcmp(buffer, "exit") == 0)
        {
		free(buffer);
		exit_command(exitstatus);
		fflush(stdout);
	}
  if (strcmp(buffer, "env") == 0)
        {
            env_command();  
            continue;  
        }
  if (strcmp(buffer, "debug_path") == 0)
  {
	  debug_path(); continue;
  }
  if (new_command(buffer))
  {
	  printf("Command found: %s\n", buffer);
	  if (command_status == -1)
	  {
		  printf("%s: Command not found\n", buffer);
	  }
  } else {
	  printf("%s: Command not found\n", buffer);
  }
  execute_command(buffer);
           /** exit_command(exitstatus);*/
    }

    free(buffer);
    return (0);
}
