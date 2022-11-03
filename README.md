SIMPLE SHELL

Description

Project 0x16 - Simple Shell - A simple UNIX command interpreter that executes commands read from the standard input or from a file. Based on the Bourne Shell.

List of Allowed Functions and System Calls

* <a href="https://linux.die.net/man/2/access"> access </a> (man 2 access)

* <a href="https://man7.org/linux/man-pages/man2/chdir.2.html"> chdir </a> (man 2 chdir)

* <a href="https://man7.org/linux/man-pages/man2/close.2.html"> close </a> (man 2 close)

* <a href="https://linux.die.net/man/3/closedir"> closedir </a> (man 3 closedir)

* <a href="https://man7.org/linux/man-pages/man2/execve.2.html"> excve </a> (man 2 excve)

*  <a href="https://man7.org/linux/man-pages/man3/exit.3.html"> exit </a> (man 3 exit)

* <a href="https://linux.die.net/man/2/_exit"> _exit </a> (man 2 _exit)

* <a href="https://linux.die.net/man/3/fflush"> fflush </a> (man 3 fflush)

* <a href="https://man7.org/linux/man-pages/man2/fork.2.html"> fork </a> (man 2 fork)

* <a href="https://linux.die.net/man/3/free"> free </a> (man 3 free)

* <a href="https://man7.org/linux/man-pages/man3/getcwd.3.html"> getcwd </a> (man 3 getcwd)

* getline (man 3 getline) 

* isatty (man 3 isatty)

* kill (man 2 kill)

* malloc(man 3 malloc)

* open (man 2 open)

* opendir (man 3 opendir)

* perror (man 3 perror)

* read (man 2 read)

* readdir (man 3 readdir)

* signal (man 2 signal)

* stat (__xstat)(man 2 stat)

* lstat (__lxstat)(man 2 lstat)

* fstat (__fxstat)(man 2 fstat)

* strtok (man 3 strtok) 

* wait (man 2 wait)

* waitpid (man 2 waitpid)

* wait3 (man 2 wait3)

* wait4 (man 2 wait4)

* write (man 2 write)

Compilation

The shell will be compiled this way:

gcc -Wall -Wextra -Werror -pedantic *.c -o hsh

AUTHORS

Olabode Bodex

Nathan Azibabhonomeni
