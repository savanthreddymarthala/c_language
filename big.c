#include<stdio.h>
int great(int,int,int);
int main()
{
int x,y,z;
printf("enter the values of x,y,z");
scanf("%d%d%d",&x,&y,&z);
great(x,y,z);
}
int great(int a,int b,int c)
{
if (a>b && a>c)
{
printf("a is greater");
}
else if (b>a & b>c)
printf("b is greater");
else if (c>a && c>b)
printf("c is greater");
else
printf("all are equal");
}
