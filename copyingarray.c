#include<stdio.h>
int main ()
{
int a1[5],a2[5],i;
for (int i = 0; i<5; i++)
{
    printf("Element %d: ",i);
    scanf("%d",&a1[i]);
}
for ( i = 0; i<5; i++)
{
    a2[i] = a1[i];
    
}
printf("The elements of array 1 \n");
for ( i = 0; i<5; i++)
{
    printf("% 3d",a1[i]);
    
}
printf(" \nThe elements of array 2 \n");
for ( i = 0; i<5; i++)
{
    printf("% 3d",a2[i]);
    
}
//printing the array 2  in rverse
printf(" \nprinting the array 2  in rverse\n");

for(i=5-1;i>=0;i--){
    printf("%d",a2[i]);
}

return 0;
}