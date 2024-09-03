int Asterics()
{
	static int n;
	printf("No of rows\n");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= 2 * n - 1; j++)
		{
			if (j >= n - (i - 1) && j <= n + (i - 1))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}