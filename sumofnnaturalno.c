#include<stdio.h>
int main ()
{
int num,i,sum;
printf("Enter the n number \n");
scanf("%d",&num);
for(i=0;i<=num;i++)
{
    printf("the numbers are %d \n",i);
    sum = sum +i;
}
printf("The sum of the number is %d \n",sum);
return 0;
}