#include "shell.h"
#include <string.h>
#include <unistd.h>


extern char **global_environ;

char *path (void)
{
	char **new_path = global_environ;

	if (new_path == NULL)
	{
		/**fprintf(stderr, "global_environ is not initialized\n");*/
		return NULL;
	}
	while (*new_path)
	{
		if (strncmp(*new_path, "PATH=", 5) == 0)
		{
			return *new_path + 5;
		}
		new_path++;
	}
	return (NULL);
}

int new_command (char *command)
{
	char *exists_path = path();
	char *path_copy = NULL;
	char *token;
	char command_path[1024];

	if (exists_path == NULL)
	{
		return (0);
	}

	path_copy = strdup(exists_path);
	if (path_copy == NULL)
	{
		perror("non non non");
		return (0);
	}

	token = strtok(path_copy, ":");

	while (!token)
	{
		sprintf(command_path, "%s/%s", token, command);

		if (access(command_path, X_OK) == 0)
		{
			free(path_copy);
			return (1);
		}
		token = strtok(NULL, ":");
	}

	free(path_copy);
	return (0);
}
