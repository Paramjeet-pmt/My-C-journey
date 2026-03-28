#include <stdio.h>

int main()
{
    int a[50], n, i, pos, value, choice;

    printf("Enter Number of elemnets: ");
    scanf("%d", &n);

    for (i = 0; i <= n; i++)
    {
        printf("Enter the %dth element of array : ", i);
        scanf("%d", &a[i]);
    }

    printf("\n1 Insertion");
    printf("\n2 Deletion");
    printf("\n Enter your chice: ");
    scanf("%d",&choice);

    if (choice == 1)
    {
        printf("Enter position to insert: ");
        scanf("%d", &pos);

        printf("Enter the value to insert: ");
        scanf("%d", &value);
        // Shift element to right
        for (i = n+1; i >= pos; i--)
        {
            a[i] = a[i - 1];
        }

        a[pos - 1] = value;
        n++;

        printf("Array after insertion: \n");
        for (i = 0; i <= n; i++)
        {
            printf("%d  ", a[i]);
        }
    }else if(choice == 2){
        printf("Enter the position to delete: ");
        scanf("%d", &pos);

        //shift element to left
        for(i = pos-1; i<= n; i++){
            a[i] = a[i+1];
        }

        n--;

        printf("Array after deletion: \n");
        for(i= 0; i<= n; i++){
            printf("%d  ", a[i]);
        }
    }
    else{
        printf("Invaild Choice: ");
    }

    return 0;
}