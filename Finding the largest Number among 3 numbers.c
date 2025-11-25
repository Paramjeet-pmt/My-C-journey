#include <stdio.h>

int main()
{
	int a, b, c, temp = 0;

	printf("Enter 3 number :");
	scanf("%d %d %d", &a, &b, &c);

	if (a == b && b == c)
	{
		printf("All the Number are equal");
	}

	else
	{
		if (a >= b && a >= c)
		{
			printf("Largest number :%d", a);
		}
		else
		{
			if (b >= c && b >= c)
			{
				printf("Largest number :%d", b);
			}
			else
			{
				printf("Largest number :%d", c);
			}
		}
	}

	return 0;
}
