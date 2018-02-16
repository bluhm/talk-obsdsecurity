#include <stdlib.h>

int foo;
extern void layout(void);

int
main(int argc, char *argv[])
{
	layout();
	exit(0);
}
