extern int foo(void);

int
use_plt(void)
{
	return foo();
}
