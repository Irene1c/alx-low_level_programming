#include <stdio.h>

/**
 * race - prints before main
 */
void __attribute__ ((constructor)) race()
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
