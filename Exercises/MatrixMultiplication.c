
/*
A				B
{1, 2, 3}		{1, 2, 3}
{4, 5, 6}		{4, 5, 6}
{7, 8, 9}		{7, 8, 9}

A {{0,0}, {0,1}, {0,2}}
	X	+	X	+	X	= Product
B {{0,0}, {1,0}, {2,0}}

*/

void MatrixMultiplication()
{
	int arows, acols;
	printf("Enter the number of rows and columns for matrix a: ");
	scanf("%d %d", &arows, &acols);
	printf("\n");

	int a[arows][acols];

	printf("Enter the elements of array a:\n");
	for (int i = 0; i < arows; i++)
	{
		for (int j = 0; j < acols; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}

	printf("\n");

	int brows, bcols;
	printf("Enter the number of rows and columns for matrix b: ");
	scanf("%d %d", &brows, &bcols);
	printf("\n");

	int b[brows][bcols];

	printf("Enter the elements of array b:\n");
	for (int i = 0; i < brows; i++)
	{
		for (int j = 0; j < bcols; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}

	printf("\n");

	int product[arows][bcols];
	int sum = 0;

	for (int i = 0; i < arows; i++)
	{
		for (int j = 0; j < bcols; j++)
		{
			for (int k = 0; k < brows; k++)
			{
				sum += a[i][k] * b[k][j];
			}

			product[i][j] = sum;
			sum = 0;
		}
	}

	for (int i = 0; i < arows; i++)
	{
		for (int j = 0; j < bcols; j++)
		{
			printf("%d ", product[i][j]);
		}
		printf("\n");
	}

	return;
}