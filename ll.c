#include<stdio.h>
int main()
{
int n,r=0,i=1;
printf("enter the value of n");
scanf("%d",&n);
while(i<=n)
{
r=r+i;
i=i+1;
}
printf("%d",r);
}
