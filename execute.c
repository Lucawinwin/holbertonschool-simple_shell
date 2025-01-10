#include "shell.h"

/**
 * execute_command - Executes a command
 * @command: The command to execute
 * Return: 0 on success, -1 on failure
 */
int execute_command(char *command)
{
    pid_t pid;
    int status;
    char *argv[2];

    /* Execute only if command exists and is executable */
   /** if (access(command, X_OK) != 0)
    {
        printf("./shell: No such file or directory\n");
        return (-1);
    }*/

    pid = fork();
    if (pid == -1)
        return (-1);

    if (pid == 0)
    {
        argv[0] = command;
        argv[1] = NULL;
        
        execve(command, argv, environ);
        exit(EXIT_FAILURE);
    }
    else
    {
	    waitpid(pid, &status, 0);
	    if (WIFEXITED(status) && WEXITSTATUS(status) == 127)
	    {
		    fprintf(stderr, "%s: Command not found\n", command);
	    }
	    else if (WIFEXITED(status))
	    {
		    return WEXITSTATUS(status);
	    }
    }

    return (0);
}
