void BinaryToDecimal()
{
	static int binary;
	static int rem;

	int decimal = 0, weight = 0;

	printf("Enter number: ");
	scanf("%d", &binary); // 1001

	while (binary != 0)
	{
		rem = binary % 10;
		binary = binary / 10;

		// decimal += pow(2, weight) * rem
		int pow;

		if (weight == 0)
			pow = 1;
		else
			pow = 2;

		for (int i = 1; i < weight; i++)
		{
			pow += pow;
		}

		decimal += pow * rem;

		printf("Decimal %d = Pow %d * Rem %d\n", decimal, pow, rem);

		weight++;
	}

	printf("Decimal %d", decimal);
}