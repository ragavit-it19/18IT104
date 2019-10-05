#include<stdio.h>
void main()
{
int a;
a=4;
for(int i=1;i<=a;i++)
{
for(int j=a-1;j>=i;j--)
printf("*");
for(int k=1;k<=i;k++)
printf("%d",k);
for(int k=i-1;k>=1;k--)
printf("%d",k);
printf("\n");
}
}
