int
use_rbx(void)
{
	long x, y;

	x = 7;
	asm (
	    "mov	%1, %%rbx\n"
	    "mov	%%rbx, %0\n" :
	    "=g"(y) : "r"(x) : "rbx"
	);
	return y;
}
