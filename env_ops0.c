#include <stdlib.h>
#include <unistd.h>
#include <dirent.h>

char *get_env_val(char *);

/**
 * get_path - get the path in a double char pointer
 * Return: the double char pointer of the path
 */
char **get_path()
{
        char *temp = NULL;
        char **ret = NULL;

        temp = get_env_val("PATH");
        ret = _strtok(temp, ":");
        do_mem(0, temp);
        return (ret);
}

/**
 * get_env_val - get the value of an env variable
 * @name: the name of the variable to get the value of
 * Return: the string pointer to where the value part of the variable starts
 */
char *get_env_val(char *name)
{
        int i = 0, j = 0;
        char **env = NULL;
        char *res = NULL;

        env = get_env();
        while (env[i])
        {
                j = 0;
                while (env[i][j] && name[j])
                {
                        if (env[i][j] != name[j])
                                break;
                        j++;
                }
                /* j only counts until null byte if name matches */
                if (name[j] == '\0' && env[i][j] == '=')
                {
                        if (!env[i][j + 1])
                                return (NULL);
                        res = do_mem((_strlen((env[i]) + j + 1) + 1), NULL);
                        _strcpy(res, ((env[i]) + j + 1));
                        free_double_array(env);
                        return (res);
                }
                i++;
        }
        free_double_array(env);
        return (NULL);
}

/**
  * find_path - finds if a command exists in a path and returns the path
  * @path: paths to search
  * @command: command to search for
  * Return: path where command is
  */
char *find_path(char **path, char *command)
{
        /* pointer for directory entry  & opendir returns a pointer of DIR type*/
        struct dirent *de = NULL;
        DIR *dr = NULL;
        int i = 0;

        if (!command || !path)
                return (NULL);
        for (i = 0; path[i]; i++)
        {
                dr = opendir(path[i]);
                /* opendir returns NULL if couldn't open directory */
