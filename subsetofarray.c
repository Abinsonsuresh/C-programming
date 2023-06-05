// C program to find the set is the subset or not!
#include<stdio.h>
int Subset(int a[],int b[],int m, int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(b[i]==a[j])
            {
                break;
            }
        }
        // if the array b is not a sub set this loop will run j==m to break the loop and false is returned 0;
        if(j==m)
        {
            return 0;
        }
        
    }
    //if the array b is a sub set of a then it will return true value 1;
    return 1;
}
int main ()
{
int i,j,m,n,sub;
int a[]={1,2,3,4,5};
int b[]={1,2,3,4};
m = sizeof(a)/sizeof(a[5]);
n = sizeof(b)/sizeof(b[4]);
sub = Subset(a,b,m,n);
if(sub)
{
    printf("The set is the subset");
}
else
{
    printf("The set is not the subset");
}

getchar();
return 0;
}