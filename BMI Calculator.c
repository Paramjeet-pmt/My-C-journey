#include <stdio.h>

int main()
{
    double weight, height;
    printf("Enter weight (kg) and height (m): ");
    if (scanf("%lf %lf", &weight, &height) != 2)
        return 0;
    double bmi = weight / (height * height);
    printf("BMI = %.2f - ", bmi);
    if (bmi < 18.5)
        printf("Underweight\n");
    else if (bmi < 25.0)
        printf("Normal\n");
    else if (bmi < 30.0)
        printf("Overweight\n");
    else
        printf("Obese\n");
    return 0;
}
