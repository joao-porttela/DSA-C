void BinarySum()
{
	static int sum, carry, a, b;

	printf("Enter two numbers: \n");
	scanf("%d", &a);
	scanf("%d", &b);

	while (b != 0)
	{
		sum = a ^ b;
		carry = (a & b) << 1;
		a = sum;
		b = carry;
	}

	printf("The sum of the two numbers is: %d", sum);

	return;
}