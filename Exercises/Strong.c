#include "../lib/Count.c"

int Strong()
{
	/*
	 * 145 = 1! + 4! + 5! = 1 + 24 + 120 = 145
	 5 * 4 * 3 * 2 * 1
	 fac = n * (n - 1);
	 */

	static int result;
	static int rem;

	int number = 145;
	int q = number;

	// O(n)
	int count = Count(number);

	for (int i = 0; i < count; i++)
	{
		rem = q % 10;
		q = q / 10;
		int mult = rem;

		for (int i = 1; i < rem; i++)
		{
			mult = mult * i;
		}

		result += mult;
	}

	if (result == number)
	{
		printf("Strong number");
	}
	else
	{
		printf("Not strong");
	}

	return 0;
}