/*
 * n = 5
 * 5! = 5 * 4 * 3 * 2 * 1 = 120
 * n! = n * (n - 1) * (n - 2) * 2 * 1
 *
 * 1! = 1
 * 0! = 1
 */

int Factorial(int n)
{
	if (n == 0 || n == 1)
		return 1;

	return n * Factorial(n - 1);
}