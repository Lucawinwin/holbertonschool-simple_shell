
## C - Simple Shell



## Description 
Le terme "shell" désigne un programme informatique qui permet à un utilisateur d'interagir avec le système d'exploitation via une interface en ligne de commande. Le shell permet de saisir des commandes qui sont ensuite interprétées et exécutées par le système. Un shell peut être utilisé pour exécuter des commandes système, lancer des programmes, manipuler des fichiers, gérer les processus, et plus encore.


## Structure du projet 
- README.md : information du projet 
- AUTHORS : Participants du projets
- man_1_simple_shell : manuel 
- Execute.c : commande pour éxécuter le programme
- Shell.h : fichier qui regroupe toute les commandes
- main.c 
- exit_command.c
- env_command.c 
- hsh 
## Requirements
General :
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- Your shell should not have any memory leaks
- No more than 5 functions per file
- All your header files should be include guarded
- Use system calls only when you need to (why?)
## List of allowed functions and system calls+
- all functions from string.h
- access (man 2 access)
- chdir (man 2 chdir)
- close (man 2 close)
- closedir (man 3 closedir)
- execve (man 2 execve)
- exit (man 3 exit)
- _exit (man 2 _exit)
- fflush (man 3 fflush)
- fork (man 2 fork)
- free (man 3 free)
- getcwd (man 3 getcwd)
- getline (man 3 getline)
- getpid (man 2 getpid)
- isatty (man 3 isatty)
- kill (man 2 kill)
- malloc (man 3 malloc)
- open (man 2 open)
- opendir (man 3 opendir)
- perror (man 3 perror)
- printf (man 3 printf)
- fprintf (man 3 fprintf)
- vfprintf (man 3 vfprintf)
- sprintf (man 3 sprintf)
- putchar (man 3 putchar)
- read (man 2 read)
- readdir (man 3 readdir)
- signal (man 2 signal)
- stat (__xstat) (man 2 stat)
- lstat (__lxstat) (man 2 lstat)
- fstat (__fxstat) (man 2 fstat)
- strtok (man 3 strtok)
- wait (man 2 wait)
- waitpid (man 2 waitpid)
- wait3 (man 2 wait3)
- wait4 (man 2 wait4)
- write (man 2 write)
## Compilation
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
## Participants
Luca windwehr github : https://github.com/Lucawinwin
Nordine ounissi github : https://github.com/Nordine000

https://lucid.app/lucidchart/dc8d3c70-2f4a-4d36-8589-db7a7a5234dd/edit?view_items=--FHhf9gXTsS&invitationId=inv_294cec27-380a-4660-9fb9-748b8ccbe076

