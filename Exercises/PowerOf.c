void PowerOf()
{
	int base, exponent;

	printf("Enter the base: ");
	scanf("%d", &base);

	printf("Enter the exponent: ");
	scanf("%d", &exponent);

	if (exponent > 0)
	{
		int power = base;

		for (int i = 1; i < exponent; i++)
		{
			power *= base;
		}

		printf("%d", power);
	}

	else if (exponent < 0)
	{
		double power = (1.0 / base);
		int expo = exponent * -1;

		for (int i = 0; i < expo; i++)
		{
			power *= (1.0 / base);
		}

		printf("%.10f", power);
	}

	return;
}