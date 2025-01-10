#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

#define PROMPT "($) "
extern char **global_environ;
extern char **environ;

/* Prototypes */
int execute_command(char *command);
int exit_command(int status);
void env_command(void);
int new_command (char *command);
char *path (void);
void init_global_environ(void);
#endif
