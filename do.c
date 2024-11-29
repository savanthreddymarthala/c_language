#include<stdio.h>
int main()
{
int i=1,r=1,n;
printf("enter the value of n");
scanf("%d",&n);
do
{
r=r*i;
i++;
}while(i<=n);
printf("%d",r);
}
