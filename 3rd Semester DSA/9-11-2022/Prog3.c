//WAP to create a directed graph using Adjacency Matrix Method.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, i, j;
    printf("Enter the number of vertices: ");
    scanf("%d", &n);
    int **a = (int **)malloc(n * sizeof(int *));
    for (i = 0; i < n; i++)
        a[i] = (int *)malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            a[i][j] = 0;
    int ch = 1;
    while (ch == 1)
    {
        int x, y;
        printf("Enter the vertices to be connected: ");
        scanf("%d %d", &x, &y);
        a[x][y] = 1;
        printf("Do you want to continue? (1/0): ");
        scanf("%d", &ch);
    }
    printf("The Adjacency Matrix is:");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        printf("");
    }
    return 0;
}