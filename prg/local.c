#include <stdlib.h>
#include <string.h>

int
local(void)
{
	char *p;
	int (*f)(int);

	explicit_bzero(&p, sizeof(p));
	explicit_bzero(&f, sizeof(f));
	if (arc4random()) {
		char b[16];
		explicit_bzero(b, sizeof(b));
	}

	return (int) ((long)p ^ (long)f);
}
