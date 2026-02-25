#include <stdio.h>
#include <math.h>

// Function to solve the quadratic equation
void solveQuadratic(double a, double b, double c) {
    double discriminant, root1, root2;

    if (a == 0) {
        printf("This is not a quadratic equation.\n");
        return;
    }

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and distinct:\n");
        printf("Root 1 = %.2lf\n", root1);
        printf("Root 2 = %.2lf\n", root2);
    } else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and equal:\n");
        printf("Root = %.2lf\n", root1);
    } else {
        double realPart = -b / (2 * a);
        double imagPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and imaginary:\n");
        printf("Root 1 = %.2lf + %.2lfi\n", realPart, imagPart);
        printf("Root 2 = %.2lf - %.2lfi\n", realPart, imagPart);
    }
}

int main() {
    double a, b, c;
    
    printf("Enter coefficients a: ");
    scanf("%lf", &a);
    printf("Enter coefficients b : ");
    scanf("%lf",&b);
    printf("Enter coefficients c: ");
    scanf("%lf",&c);

    solveQuadratic(a, b, c);

    return 0;
}
