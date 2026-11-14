#include<stdio.h>
int main()
{
int a [3][3],i,j;

printf("enter matrix values:");

for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    scanf("%d",&a[i][j]);

printf("the Array values are:");
for(i=0;i<3;i++)
{
   printf("\n");
   for(j=0;j<3;j++)
   printf("%d\t",a[i][j]);

}

return 0;
}

