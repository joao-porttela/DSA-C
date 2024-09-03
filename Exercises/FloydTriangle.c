void FloydTriangle()
{
	static int n;
	int count = 1;

	printf("Number of rows: \n");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			printf("%d ", count);
			count++;
		}
		printf("\n");
	}

	return;
}