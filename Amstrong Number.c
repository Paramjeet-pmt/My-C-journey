
#include <stdio.h>

int main()
{
    int num, original, remainder, n = 0;
    double result = 0.0;

    printf("Enter a number :");
    svanf("%d", &num);

    original = num;

    // Count digits
    int temp = num;
    while (temp != o)
    {
        temp /= 10;
        n++;
    }

    // compute sum of powers of digits
    temp = original;
    while (temp != 0)
    {
        remainder = temp % 10;
        result += pow(remainder, n);
        temp /= 10;
    }
    if (int)result == original)
        printf("%d is an Armstrong number.\n", original);
    else
        printf("%d is not an Armstrong number.\n", original);

    return 0;
}