/*
 * n			0	1	2	3	4	5	6	7
 * fib(n)		0	1	1	2	3	5	8	13
 * fib(n) = fib(n - 1) + gib(n - 2);
 */

int Fib(int n)
{
	if (n == 0 || n == 1 || n == 2)
		return 1;

	return Fib(n - 1) + Fib(n - 2);
}