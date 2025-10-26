Program to print square with diagonal 
#include <stdio.h>

int main() {
    int size;
    char symbol;

    printf("Enter the size of the square: ");
    scanf("%d", &size);

    printf("Enter the symbol to use for the square and diagonals: ");
    // Consume the newline character left by previous scanf
    while (getchar() != '\n'); 
    scanf("%c", &symbol);

    printf("\nSquare with Diagonals:\n");

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            // Condition for the border of the square
            // Condition for the principal diagonal (top-left to bottom-right)
            // Condition for the secondary diagonal (top-right to bottom-left)
            if (i == 0 || i == size - 1 || j == 0 || j == size - 1 || i == j || i + j == size - 1) {
                printf("%c ", symbol);
            } else {
                printf("  "); // Two spaces for alignment
            }
        }
        printf("\n");
    }

    return 0;
}