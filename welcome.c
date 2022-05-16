#include "main.h"

#define clear() printf("\033[H\033[J")

/**
 * init_shell - initialiases shell with greeting
 * Return: void
 */
void init_shell(void)
{
	_puts("\n\n\n\n\t\t\t\t****************** \
	************************\n\n\n\n\t\t\t\t\t*** \
	A simple UNIX SHELL****\n\n\n\t\t\t\t\t\t \
	-by-\n\n\n\t\t\t\t\t  -Stephen and Becky-\n\n\n\n\n\t\t\t\t \
	******************************************");
	sleep(0.5);
	_puts("\n");
	sleep(1);
}
