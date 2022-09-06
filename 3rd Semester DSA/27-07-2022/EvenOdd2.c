#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void rearrangeEvenAndOdd(int arr[], int n)
{
	int j = -1;

	for (int i = 0; i < n; i++)
    {
		if (arr[i] % 2 == 0)
        {
			j++;
			swap(arr[i], arr[j]);
		}
	}
}

int main()
{
	int c[50];
    int size;
    printf("Enter the size of array : ");
    scanf("%d", &size);
    printf("Enter an array : ");

    for(int i=0;i<size;i++)
    {
        scanf("%d\n", &c[i]);
    }

	rearrangeEvenAndOdd(c, size);

	for(int i=0;i<size;i++)
    {
        printf("%d ", c[i]);
    }
    return 0;
}