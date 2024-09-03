void isPrime()
{
	static int n;
	static int count;

	printf("Number: \n");
	scanf("%d", &n);

	if (n == 1)
	{
		printf("%d is not prime", n);
		return;
	}

	if (n == 2 || n == 3)
	{
		printf("%d is prime", n);
		return;
	}

	int val = ceil(sqrt(n));

	for (int i = 2; i <= val; i++)
	{
		if (n % i == 0)
		{
			count++;
		}
	}

	if (count == 0)
		printf("%d is prime", n);
	else
		printf("%d is not prime", n);

	return;
}