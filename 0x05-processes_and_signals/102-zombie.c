#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

/**
 * infinite_while - Infinity loop
 *
 * Return: Always 0
 */

int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}

/**
 * main - Entry Point
 *
 * Return: Always 0
 */

int main(void)
{
	int i = 0;
	pid_t pid = fork();

	if (pid > 0)
	{
		fprintf(stdout, "Zombie process created, PID: %d\n", pid);
		return (0);
	}

	infinite_while();

	return (0);
}
