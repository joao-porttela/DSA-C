int Fibonacci(int n)
{
	/*
	 * Let i be the index
	 * [0, 1, 2, 3, 4, 5, 6]
	 * [0, 1, 1, 2, 3, 5, 8]
	 * fib(seq[i]) = fib(seq[i] - 1) + fib(seq[i] - 2)
	 */

	static int result, a = 0, b = 1;

	for (int i = 0; i < n; i++)
	{
		printf("%d\n", result);
		result = a + b;
		a = b;
		b = result;
	}

	return result;
}