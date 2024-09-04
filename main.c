#include <stdio.h>
#include "./Exercises/Fib.c"

int main()
{
	static int n;
	printf("Enter a number: ");
	scanf("%d", &n);

	int a = Fib(n);
	printf("%d", a);

	return 0;
};
