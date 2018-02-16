#include <sys/mman.h>

#include <err.h>
#include <stdio.h>
#include <string.h>

extern long __guard_local;

void
guard(void)
{
	char buf[8000];
	if (mprotect(&__guard_local, sizeof(__guard_local),
	    PROT_READ|PROT_WRITE) == -1)
		err(1, "mprotect __guard_local");
	printf("guard_local\t%#0.16lx\n", __guard_local);
	__guard_local = 0;
	explicit_bzero(buf, sizeof(buf));
}
