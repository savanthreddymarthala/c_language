#include<stdio.h>
int main()
{
int num,i=1,r=1;
printf("enter the value of num");
scanf("%d",&num);
while(i<=num)
{
r=r*i;
i++;
}
printf("the num:%d",r);
}
