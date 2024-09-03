int Count(int number)
{
	static int count;

	while (number != 0)
	{
		number = number / 10;
		count++;
	}

	return count;
}