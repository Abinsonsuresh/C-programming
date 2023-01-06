#include<stdio.h>
int main ()
{
int a[100],sum=0,num,i;
printf("Enter the number of elements in the array \n");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
    printf("Enter the no %d: \n",i);
    scanf("%d",&a[i]);
    // sum = sum + a[i];
}
for(i=1;i<=num;i++)
{
    printf("The no.s are %d: \n",a[i]);
    sum = sum + a[i];
}
printf("The sum of the elements in the array is %d\n",sum);
return 0;
}