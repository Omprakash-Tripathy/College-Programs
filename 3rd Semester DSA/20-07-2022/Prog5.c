#include<stdio.h>

int between(int* arr, int n, int a, int b);

int main(){
    int n, a, b;
    int arr[30];

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements \n");
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nEnter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    
    int res = between(arr, n, a, b);
    if (res != -1)
        printf("Number of elements between %d and %d is %d", a,b, res);
    else
        printf("Either of two elements is missing from array");

    return 0;
}

int between(int* arr, int n, int a, int b){
    int found = 0, res = 0;
    for (int i = 0; i < n; i++)
    {
        if (! found){
            if (*(arr+i) == a)
                found = 1;
        }
        if (found) {
            res ++;
            if (*(arr+i) == b)
                return res;            
        }
    }
    return -1;
}