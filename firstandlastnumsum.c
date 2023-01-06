#include<stdio.h>
int main()
{
int num,sum,rem=0,first,last;
printf("Enter the number \n");
scanf("%d",&num);
last = num % 10;
while(num!=0)
{
    rem = num%10;
    first = num;
    num = num/10;
}
printf("The first num is %d \n",first);
printf("The last num is %d \n",last);
sum = first+last;
printf("The sum of the first and the last num is %d \n",sum);

return 0;
}