#include <stdio.h>

void bf_main(void) __attribute__ ((constructor));
/**
 * bf_main - use this function before main
 */
void bf_main(void)
{
	printf("You're beat! and yet, you must allow,\n
			I bore my house upon my back!\n");
}
