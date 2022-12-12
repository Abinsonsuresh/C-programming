#include<stdio.h>
int main ()
{
int i,j,num,a[10][10];
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("%d%d: ",i,j);
        scanf("%d",&a[i][j]);
    }
}
printf("The matrix is ready! \n");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("%d",a[i][j]);
        
    }
    printf("\n");
}
return 0;
}