#include <stdio.h>
#include <math.h>

double sin_series(double x, int n)
{
    double result = 0.0;
    double term = x; // First term in the series
    int sign = 1;    // Alternating sign

    for (int i = 1; i <= n; i++)
    {
        result += sign * term;
        term *= (x * x) / ((2 * i) * (2 * i + 1)); // Update term to next in series
        sign = -sign;                              // Alternate sign
    }

    return result;
}

double cos_series(double x, int n)
{
    double result = 0.0;
    double term = 1.0; // First term in the series
    int sign = 1;      // Alternating sign

    for (int i = 0; i < n; i++)
    {
        result += sign * term;
        term *= (x * x) / ((2 * i + 1) * (2 * i + 2)); // Update term to next in series
        sign = -sign;                                  // Alternate sign
    }

    return result;
}

int main()
{
    double angle;
    int terms;

    printf("Enter angle in radians: ");
    scanf("%lf", &angle);
    printf("Enter number of terms for series expansion: ");
    scanf("%d", &terms);

    double sin_approx = sin_series(angle, terms);
    double cos_approx = cos_series(angle, terms);

    printf("Approximate sin(%lf) using %d terms: %lf\n", angle, terms, sin_approx);
    printf("Approximate cos(%lf) using %d terms: %lf\n", angle, terms, cos_approx);

    return 0;
}