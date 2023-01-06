//C program to find the sum of the individual number 
int main ()
{
int num,rem=0,sum =0;
printf("Enter the number \n");
scanf("%d",&num);
while(num !=0)
{
    rem = num %10;
    sum = sum + rem;
    num = num /10;

}
printf("The sum of the number is %d \n",sum);
return 0;
}