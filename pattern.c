#include<stdio.h>
void main()
{
int n;
for(int i=1;i<=n;i++)
{
for(intj=n-1;i>=1;j--)
{
printf("*"\t);
for(intk=1;k<=i;k++)
{
printf("\t%d",k);
}
}
printf("\n");
}
}
