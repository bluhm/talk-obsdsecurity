#include <stdio.h>
#include <stdlib.h>

extern void _start(void);
extern int main(void);

void
layout(void)
{
	void *heap, *page;
	int stack;

	heap = malloc(10);
	page = malloc(10000);

	printf("start\t\t%p\n", _start);
	printf("main\t\t%p\n", main);
	printf("function\t%p\n", layout);
	printf("libc function\t%p\n", printf);
	printf("prog lib diff\t%#lx\n", (void*)printf - (void*)layout);
	printf("heap\t\t%p\n", heap);
	printf("page\t\t%p\n", page);
	printf("heap page diff\t%#lx\n", (void*)heap - (void*)page);
	printf("stack\t\t%p\n", &stack);
}
