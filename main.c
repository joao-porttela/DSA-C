#include <stdio.h>
#include "./Exercises/Factorial.c"

int main()
{
	static int n;
	printf("Enter a number: ");
	scanf("%d", &n);

	int a = Factorial(n);
	printf("%d", a);

	return 0;
};
