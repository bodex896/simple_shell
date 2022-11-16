strtok_to_double_pointer.c

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
* <a href="https://man7.org/linux/man-pages/man3/getcwd.3.html"> getcwd </a> (man 3 getcwd)
* <a href="https://linux.die.net/man/3/getline"> getline </a> (man 3 getline) 
* <a href="https://linux.die.net/man/2/getpid"> getpid </a> (man 2 getpid)
* <a href="https://linux.die.net/man/3/isatty"> isatty </a> (man 3 isatty)
* <a href="https://linux.die.net/man/2/kill"> kill </a> (man 2 kill)
* <a href="https://linux.die.net/man/3/malloc"> malloc </a> (man 3 malloc)
* <a href="https://linux.die.net/man/2/open"> open </a> (man 2 open)
* <a href="https://linux.die.net/man/3/opendir"> opendir </a> (man 3 opendir)
* <a href="https://linux.die.net/man/3/perror"> perror </a> (man 3 perror)
* <a href="https://linux.die.net/man/2/read"> read  </a> (man 2 read)
* <a href="https://linux.die.net/man/3/readdir"> readdir </a> (man 3 readdir)
* <a href="https://linux.die.net/man/2/signal"> signal </a> (man 2 signal)
* <a href="https://linux.die.net/man/2/stat"> stat </a> (__xstat) (man 2 stat)
* <a href="https://linux.die.net/man/2/lstat"> lstat </a> (__lxstat) (man 2 lstat)
* <a href="https://linux.die.net/man/2/fstat"> fstat </a> (__fxstat) (man 2 fstat)
* <a href="https://linux.die.net/man/3/strtok"> strtok </a> (man 3 strtok)
* <a href="https://linux.die.net/man/2/wait"> wait </a> (man 2 wait)
* <a href="https://linux.die.net/man/2/waitpid"> waitpid </a> (man 2 waitpid)
* <a href="https://linux.die.net/man/2/wait3"> wait3 </a> (man 2 wait3)
* <a href="https://linux.die.net/man/2/wait4"> wait4 </a> (man 2 wait4)
* <a href="https://linux.die.net/man/2/write"> write </a> (man 2 write)
* <a href="https://linux.die.net/man/"> LINUX MAN PAGES </a>

Compilation

The shell will be compiled this way:

gcc -Wall -Wextra -Werror -pedantic *.c -o hsh

AUTHORS
* Olabode Bodex
* Nathan Azibabhonomeni
