#include <stdio.h>

int Arrayrev(int arr[], int n);
void printArray(int arr[], int n);

int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6};
	int n = 6;

	Arrayrev(arr, n);
	printArray(arr, n);

	return 0;
}

int Arrayrev(int arr[], int n)
{
	for (int i = 0; i <= n / 2; i++)
	{
		int first_value = arr[i];
		int second_value = arr[(n - i - 1)];

		arr[i] = second_value;
		arr[n - i - 1] = first_value;
	}
}

void printArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
}
