#include<stdio.h>
int main ()
{
int num,rem,a[20],bin,i=0,j;
    printf("Enter the number : \n");
    scanf("%d",&num);

    while (num!=0)
    {
        a[i]=num%2;
        num = num/2;
        i++;
    }
    for(j=i-1;j>=0;j--){
        printf("%d",a[j]);
    }
return 0;
}