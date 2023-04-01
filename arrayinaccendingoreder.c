#include<stdio.h>
int main ()
{
int i,j,temp;
int a[]=  {2,7,4,5};
for(i=0;i<4;i++)
{
    for(j=i+1;j<4;j++)
    {
        if(a[j]>a[i])
        {
            temp= a[i];
            a[i]= a[j];
            a[j]= temp;

        }
    }
 for(i=0;i<4;i++)
{
    printf("% 3d",a[i]);
}
}
return 0;
}