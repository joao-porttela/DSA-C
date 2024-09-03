int Palindrome()
{
	static int result = 0;
	static int n;
	printf("Enter number\n");
	scanf("%d", &n);

	int q = n;

	while (q != 0)
	{
		int remainder = q % 10;
		result = result * 10 + remainder;
		q /= 10;
	}

	printf("%d\n", n);
	printf("%d\n", result);

	if (result == n)
	{
		printf("Number is a palindrome");
	}
	else
	{
		printf("Number is not a palindrome");
	}

	return 0;
}