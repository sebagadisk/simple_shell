#include "shell.h"

/**
 * main- entry point to the shell
 * @argc: number of arguments
 * @argv: entered arguments to the CL
 * @env: environment variable
 * Return: 0 in success- Otherwise 1.
 */
int main(int argc, char **argv, char **env)
{
	(void)argc, (void)**argv;

	shell_loop(env);
	return (EXIT_SUCCESS);
}
