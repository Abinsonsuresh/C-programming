// To add elements in an array
#include<stdio.h>
int main ()
{
    int a[5];
    for ( int i = 0; i <5; i++){
        printf("The element %d \n",i);
        scanf("%d",&a[i]);
    }
     for ( int i = 5-1; i>=0; i--){
        // printf("The element of the array  are : \n ");
        printf(" element %d: %d \n",i,a[i]);

      
    }

return 0;
}