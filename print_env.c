#include "shell.h"

/**
 * printenv - prints the environment
 * @env: environment variable
 * @argv: arguments passed
 * Return: Always 0 in success. Otherwise 1.
 */
int printenv(char **env, int *stad_exit)
{
	unsigned int i;

	/**if (env == NULL || env[0] == NULL)
		return (1);
	if (argv[1] != NULL)
	{
		return (1);
		}*/
	for (i = 0; env[i] != NULL; i++)
	{
		print_string(env[i]);
		write(STDOUT_FILENO, "\n", 1);
	}

	*stad_exit = 0;
	return (0);
}
/**
 *  print_string - auxiliar function to print each linea of env
 * @env: environment variable passed from printenv
 * Return: void
 */
void print_string(char *env)
{
	int i;

	for (i = 0; env[i] != '\0'; i++)
		;
	write(STDOUT_FILENO, env, i);
}
