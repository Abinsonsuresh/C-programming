// To add elements in an array
#include <stdio.h>
int main()
{
    int a[5], sum = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("The element %d \n", i);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        // printf("The element of the array  are : \n ");
        printf(" element %d: %d \n", i, a[i]);
        sum = sum + a[i];
    }

    printf("The sum is %d ",sum);
    printf("The size of array 3 %d ",a[3]);
    return 0;
}