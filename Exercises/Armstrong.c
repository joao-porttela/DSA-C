int Armstrong()
{
	/*
	* Given a number of order n, an armstrong number is a number in which each digit when multiplied by it self n number of times and added together, results the same number.

	* 371, is a number of order 3.
	* 3*3*3 + 7*7*7 + 1*1*1 = 27 + 343 + 1 = 371
	*/

	static int number;
	static int count;
	static int rem;
	static int result;
	int mul = 1;

	printf("Number: \n");
	scanf("%d", &number);

	int q = number;

	while (q != 0)
	{
		q = q / 10;
		count++;
	}

	int cnt = count;
	q = number;

	for (int i = 0; i < count; i++)
	{
		rem = q % 10;
		q = q / 10;

		while (cnt != 0)
		{
			mul *= rem;
			cnt--;
		}

		result += mul;
		cnt = count;
		mul = 1;
	}

	printf("%d\n", result);

	if (result == number)
	{
		printf("Armstrong number");
	}
	else
	{
		printf("Not armstrong");
	}

	return 0;
}