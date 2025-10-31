#include <stdio.h>

// Function to find the sum of proper divisor
int sum_of_divisors(int n)
{
    int sum = 0;
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    return sum;
}

int main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int sum1 = sum_of_divisors(num1);
    int sum2 = sum_of_divisors(num2);
    if (sum1 == num2 && sum2 == num1)
    {
        printf("%d and %d are amicable numbers.\n", num1, num2);
    }
    else
    {
        printf("%d and %d are not amicable numbers.\n", num1, num2);
    }
    return 0;
}