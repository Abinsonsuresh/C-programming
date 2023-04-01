// C program to find the missing number from an array 
//<--------------------------------------------------->
#include<stdio.h>
int main ()
{
int num,a[50],i,j,sum,result,totalsum;
printf("Enter the no. of elements in the array \n");
scanf("%d",&num);
totalsum = num * (num + 1)/2;
for(i=0;i<num;i++)
{
    printf("Enter the  value of the elements \n");
    scanf("%d",&a[i]);

    sum = sum + a[i];
}
printf("<---------------------------------------------------->\n");
printf("The sum of the array is : %d \n",sum);
printf("The sum of the range is : %d \n",totalsum);
printf("<---------------------------------------------------->\n");
result = totalsum - sum;
printf("The missing number of the array is %d \n",result);
return 0;
}