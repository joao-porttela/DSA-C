void PerfectNumber()
{
	static int n, rem;
	int sum = 0;

	printf("Enter the base: ");
	scanf("%d", &n);

	for (int i = 1; i < n; i++)
	{
		rem = n % i;

		if (rem == 0)
			sum += i;
	}

	printf("%d\n", sum);

	if (sum == n)
		printf("%d is a perfect number", n);
	else
		printf("%d is not a perfect number", n);

	return;
}