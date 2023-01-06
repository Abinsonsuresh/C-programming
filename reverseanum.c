//C program to reverese a number 
#include<stdio.h>
int main ()
{
int num,rem=0,rev=0;
printf("Enter the number \n");
scanf("%d",&num);
while(num !=0)
{
    rem = num %10;
    rev = rev * 10 + rem;
    num = num /10;

}
printf("The reverse of the number is %d \n",rev);
return 0;
}