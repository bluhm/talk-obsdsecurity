#include <stdio.h>
#include <stdlib.h>

int foo = 7;
extern void layout(void);
extern void guard(void);

int
main(int argc, char *argv[])
{
	foo = 1;
	layout();
	guard();
	exit(0);
}
