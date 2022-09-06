#include<stdio.h>

int main()
{
    int a[50],i,n,largest_61,smallest_61;
    printf("\nEnter the number of elements : ");
    scanf("%d",&n);

    printf("\nInput the array elements : ");
    for(i=0;i<n;++i)
    {
        scanf("%d",&a[i]);
    }

    largest_61=smallest_61=a[0];

    for(i=1;i<n;++i)
    {
        if(a[i]>largest_61)
            largest_61=a[i];

        if(a[i]<smallest_61)
            smallest_61=a[i];
    }

    printf("\nThe smallest element is %d\n",smallest_61);
    printf("\nThe largest element is %d\n",largest_61);

    return 0;
}