#include <unistd.h>
#include "shell.h"

extern char **environ;

char **global_environ;

void init_global_environ(void)
{
        global_environ = environ;
}
