#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

/**
 * infinite_while - Infinite loop (void).
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
 * main - Creates 5 zombie processes
 *
 * Return: Always 0
 */

int main(void)
{
	int i;
	pid_t pid;

	for (i = 0; i < 5; i++)
	{
		pid = fork();

		if (pid > 0)
		{
			fprintf(stdout, "Child process created, PID: %d\n", pid);
		}
		else if (pid == 0)
		{
			infinite_while();
		}
	}

	return (0);
}
