#include<stdio.h>
int main ()
{
int num,f = 1,i;
printf("Enter the  number \n");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
    f = f * i;
}
printf("The factorial of the %d number is %d",num,f);
return 0;
}