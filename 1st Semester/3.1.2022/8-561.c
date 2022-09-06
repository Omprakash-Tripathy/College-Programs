#include <stdio.h>
int count = 0, m = 0;
int sum(int arr[], int n)
{
    if (count < n)
    {
        m = m + arr[count];
        count++;
        sum(arr, n);
    }
    else
    {
        return m;
    }
}
int main()
{
    int n;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter value of array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int S = sum(arr, n);
    printf("Sum of all elements of array is %d", S);
    return 0;
}